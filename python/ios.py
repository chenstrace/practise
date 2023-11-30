import json
import time
from typing import Dict, List, Optional

import wda
from loguru import logger
from pydantic import BaseModel
from tidevice import Usbmux
from tqdm import tqdm


class Element(BaseModel):
    name: Optional[str]
    label: Optional[str]
    value: Optional[str]
    type: Optional[str]
    isEnabled: bool
    isVisible: bool
    isAccessible: bool
    rect: Dict[str, int]


def sort_keys_recursive(dictionary):
    if not isinstance(dictionary, dict):
        return dictionary

    sorted_dict = {}
    for key in sorted(dictionary.keys(), key=lambda x: custom_key_order(x)):
        if key == "children":
            sorted_dict[key] = [sort_keys_recursive(child) for child in
                                sorted(dictionary[key], key=lambda x: custom_key_order(x))]
        else:
            sorted_dict[key] = dictionary[key]

    return sorted_dict


def custom_key_order(key):
    key_order = ["name", "type", "label", "value", "isAccessible", "isEnabled", "isVisible", "isFocused",
                 "rawIdentifier", "frame", "rect", "children"]
    return key_order.index(key) if key in key_order else float('inf')


def get_xml_source(session, out_file='out.xml'):
    source = session.source(format='xml')
    with open(out_file, 'w') as f:
        f.write(source)
    return source


def get_json_source(session, out_file='out.json'):
    source = session.source(format='json')
    # sorted_source = sort_keys_recursive(source)
    sorted_source = source
    # if source == sorted_source:
    #     print("equal")
    # else:
    #     print("not equal")
    with open(out_file, 'w', encoding='utf-8') as f:
        json.dump(sorted_source, f, indent=4, ensure_ascii=False)
    return sorted_source


def process_source(elements, source, element_type_set, min_element_height=18):
    access_count = 0
    name_count = 0
    isEnabled = source.get("isEnabled")
    isAccessible = source.get("isAccessible")
    # if isEnabled == "1":
    #     access_count += 1

    # if isAccessible == "1":
    #     access_count += 0
    isVisible = source.get("isVisible")

    if isVisible == "1":
        access_count += 1
    name = source.get("name")
    label = source.get("label")
    value = source.get("value")

    if name is not None:
        name_count += 1
    if label is not None:
        name_count += 1
    if value is not None:
        name_count += 1

    type = source.get("type")
    rect = source.get("rect")
    element = Element(name=name, label=label, value=value, type=type, isEnabled=isEnabled, isVisible=isVisible,
                      isAccessible=isAccessible, rect=rect)
    if access_count >= 1 \
            and name_count >= 1 \
            and type in element_type_set \
            and rect['height'] >= min_element_height:
        elements.append(element)

    children = source.get("children")
    if children:
        for child in children:
            process_source(elements, child, element_type_set)


def find_elements(source, element_type_set=None):
    if element_type_set is None:
        # element_type_set = {"Button", "StaticText", "TextField", "SecureTextField"}
        element_type_set = {"Button", "StaticText"}

    elements = []
    process_source(elements, source, element_type_set)
    return elements


def are_elements_equal(e1, e2):
    return (
            e1.name == e2.name and
            e1.label == e2.label and
            e1.value == e2.value and
            e1.type == e2.type
    )


def is_element_added(td_array, input_element):
    input_summary = (input_element.name, input_element.label, input_element.type, input_element.rect["width"],
                     input_element.rect["height"])
    for row in td_array:
        for element in row:
            element_summary = (element.name, element.label, element.type, element.rect["width"], element.rect["height"])
            if input_summary == element_summary:
                return True
    return False


def is_page_changed(list_a: List[Element], list_b: List[Element]) -> bool:
    count_matching = 0

    for model_a in list_a:
        for model_b in list_b:
            if are_elements_equal(model_a, model_b):
                count_matching += 1
                break

    return count_matching <= len(list_a) / 2


def fix_array_and_ptr(td_array, ptr):
    while ptr and td_array:
        row_index = len(ptr) - 1
        col_index = ptr[row_index]

        if col_index >= len(td_array[row_index]):
            ptr.pop()
            if ptr:
                ptr[-1] += 1
            td_array.pop(row_index)
        else:
            break

    return td_array, ptr


def filter_elements(td_array, elements):
    if not elements:
        return []

    res = []
    added_text = set()
    for element in elements:
        text = element.name or element.label or element.value
        if text in added_text:
            continue
        if has_back_word(text):
            logger.info(f"{text} is skipped, due to back keywords")
            continue
        if is_element_added(td_array, element):
            logger.info(f"{text} is skipped, due to td_array")
            continue
        # if "#" in text:  # wda bug
        #     continue
        res.append(element)
        added_text.add(text)
    return res


def filter_back_words(elements):
    if not elements:
        return []

    res = []
    for element in elements:
        text = element.name or element.label or element.value
        if has_back_word(text):
            logger.info(f"{text} is skipped, due to back keywords")
            continue
        res.append(element)
    return res


def click(bundle_id, session, elements, td_array: List[List[Element]], ptr, cur_row, max_depth=3):
    while True:
        logger.info(f"current_row={cur_row},ptr={ptr},len(td_array)={len(td_array)},td_array={td_array}")
        click_internal_dialog_if_needed(session, elements)
        if len(td_array) == 0:
            logger.info("end1")
            break
        if ptr[0] == len(td_array[0]):
            logger.info("end2")
            break

        if cur_row >= max_depth:
            ptr[cur_row - 1] += 1
            cur_row = 0
            td_array = td_array[:max_depth]
            ptr = ptr[:max_depth]
            fix_array_and_ptr(td_array, ptr)

            with tqdm(total=1, desc="Hit max depth,Stop App %s" % bundle_id, unit="call") as pbar:
                session.app_stop(bundle_id)
                pbar.update(1)

            for _ in tqdm(range(3), desc="Waiting Stop"):
                time.sleep(1)

            with tqdm(total=1, desc="ReLaunch App %s" % bundle_id, unit="call") as pbar:
                session.app_start(bundle_id)
                pbar.update(1)

            for _ in tqdm(range(10), desc="Waiting after re-launch"):
                time.sleep(1)

            # 点击同意弹窗
            # 配置化进入首页

            with tqdm(total=1, desc="Getting JSON Source after re-launch", unit="call", miniters=1) as pbar:
                source = get_json_source(session)
                pbar.update(1)
            elements = find_elements(source)
        else:
            col = ptr[cur_row]

            if col >= len(td_array[cur_row]):
                td_array = td_array[:cur_row]
                ptr[cur_row - 1] += 1
                ptr = ptr[:cur_row]
                cur_row = 0
                fix_array_and_ptr(td_array, ptr)
            else:
                e_to_click = td_array[cur_row][col]
                element_click_short = (e_to_click.name, e_to_click.value, e_to_click.label, e_to_click.type)
                text_click = e_to_click.name or e_to_click.value or e_to_click.label

                with tqdm(total=1, desc=f"Click {text_click}, td_array[{cur_row}][{col}]", unit="call") as pbar:
                    session(className=e_to_click.type, name=e_to_click.name, label=e_to_click.label).click_exists()
                    pbar.update(1)

                for _ in tqdm(range(3), desc=f"Waiting after click {text_click}"):
                    time.sleep(1)

                with tqdm(total=1, desc=f"Getting JSON source after click {text_click}", unit="call") as pbar:
                    source_after_click = get_json_source(session)
                    pbar.update(1)

                elements_after_click = find_elements(source_after_click)
                page_changed = is_page_changed(elements, elements_after_click)

                logger.info("After click {}, Page_Change={}, elems_len={}, elements={}", text_click, page_changed,
                            len(elements_after_click), elements_after_click)
                filtered_elements_after_click = filter_elements(td_array, elements_after_click)

                if page_changed:
                    cur_row += 1
                    if len(td_array) < max_depth and filtered_elements_after_click:
                        td_array.append(filtered_elements_after_click)
                        ptr.append(0)

                    elements = elements_after_click
                else:
                    ptr[cur_row] += 1


def click_internal_dialog_if_needed(session, elements: List[Element]):
    dialog_text_list = {"好的", "知道了", "确定", "确认", "OK", "Sure"}
    for element in elements:
        text = element.name or element.label or element.label
        if text in dialog_text_list:
            logger.info(f"点击 {text}")
            session(className=element.type, name=element.name,
                    label=element.label, value=element.value).click_exists()
            time.sleep(2)
            break


def has_back_word(input_str):
    if not isinstance(input_str, str):
        return False
    words = input_str.split()

    if len(words) <= 5:
        for word in words:
            if word.lower() in ["back", "cancel", "search"]:
                return True

    cws = ["后退", "返回", "取消", "搜索"]
    for cw in cws:
        if cw in input_str:
            return True
    return False


def main(bundle_id):
    device_list = Usbmux().device_list()
    udid = device_list[0].udid
    logger.info("device udid is {}", udid)

    client = wda.USBClient(udid)
    # client = wda.Client('http://127.0.0.1:8100')

    with tqdm(total=1, desc="Creating Session", unit="call") as pbar:
        session = client.session()
        pbar.update(1)

    with tqdm(total=1, desc="Launching App %s" % bundle_id, unit="call") as pbar:
        session.app_launch(bundle_id)
        pbar.update(1)

    for _ in tqdm(range(10), desc="Loading"):
        time.sleep(1)

    # 点击同意弹窗
    # 配置化进入首页

    with tqdm(total=1, desc="Getting JSON Source", unit="call", miniters=1) as pbar:
        source = get_json_source(session)
        pbar.update(1)

    td_array = []
    ptr = []
    cur_row = 0

    elements = find_elements(source)
    logger.info("First page info: len={}, elements={}", len(elements), elements)
    elements_after_filter = filter_back_words(elements)
    td_array.append(elements_after_filter)
    ptr.append(0)
    # elements是没过滤的
    # td_array是过滤后的，认为需要点击的
    click(bundle_id, session=session, elements=elements, td_array=td_array, ptr=ptr, cur_row=cur_row)


if __name__ == '__main__':
    # "com.anker.AnkerMake"
    # "com.netease.news"
    # "com.dhgate.DHgateBuyer"
    # main("com.anker.AnkerMake")
    main("com.netease.news")
