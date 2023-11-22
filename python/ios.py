import json
import sys
import time

import wda
from tidevice import Usbmux
from tqdm import tqdm


def sort_keys_recursive(dictionary):
    if not isinstance(dictionary, dict):
        return dictionary

    sorted_dict = {}
    for key in sorted(dictionary.keys(), key=lambda x: custom_key_order(x)):
        if key == "children":
            sorted_dict[key] = [sort_keys_recursive(child) for child in
                                sorted(dictionary[key], key=lambda x: custom_key_order(x))]
        # elif key in ["rect"]:
        #     sorted_dict[key] = dictionary[key]
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
    sorted_source = sort_keys_recursive(source)
    # if source == sorted_source:
    #     print("equal")
    # else:
    #     print("not equal")
    with open(out_file, 'w', encoding='utf-8') as f:
        json.dump(sorted_source, f, indent=4, ensure_ascii=False)
    return sorted_source


# output_dict = sort_dict_keys(input_dict)


def process_element(element, result_array):
    access_count = 0
    name_count = 0
    if element.get("isEnabled") == "1":
        access_count += 1
    if element.get("isVisible") == "1":
        access_count += 1
    if element.get("isAccessible") == "1":
        access_count += 1

    name = element.get("name")
    label = element.get("label")
    value = element.get("value")

    if name is not None:
        name_count += 1
    if label is not None:
        name_count += 1
    if value is not None:
        name_count += 1

    type = element.get("type")

    if access_count >= 2 and name_count >= 1 and type != 'Application':
        name = element.get("name")
        rect = element.get("rect")
        result_array.append({"name": name, "label": label, "value": value, "type": type, "rect": rect})

    children = element.get("children")
    if children:
        for child in children:
            process_element(child, result_array)


def find_elements(source):
    result_array = []
    process_element(source, result_array)
    return result_array


device_list = Usbmux().device_list()
udid = device_list[0].udid
print("device udid is", udid, flush=True)

c = wda.USBClient(udid)
# c = wda.Client('http://127.0.0.1:8100')

# c.app_launch("com.anker.AnkerMake")
for _ in tqdm(range(10), desc="Waiting"):
    time.sleep(1)  # Sleep for 1 second per iteration
# 点击同意弹窗
# 配置化进入首页
session = c.session()
t1 = time.time()
source = get_json_source(session)
t2 = time.time()
print("source json cost time:", t2 - t1)

elements = find_elements(source)
print(elements)

# send keys works
# session.send_keys("aaaa")

# swipe works
# session.swipe_up()

# rect = session.window_size()

# click works
# session.tap(20 + 335 / 2, 163 + 26 / 2)
t1 = time.time()
# login_btn = session(className='Button', name='登入')
login_btn = session(text='登入')

# login_btn = session(predicate='name="URL" OR name="登入"')

t2 = time.time()
elapsed_time = t2 - t1
print(f"find button cost {elapsed_time:.6f} seconds")

login_btn.click()
# 判断页面发生的了变化
# 1. 基于UI hierarchy （大部分应该是准的，有例外）
# 2. 基于元素的内容。 （text非空的集合）
