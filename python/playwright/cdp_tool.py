import time

from playwright.sync_api import sync_playwright

from utils.web.selector import get_css_selector_by_element


def has_listener(cdp, element, t=''):
    try:
        tag_name = element.evaluate('element => element.tagName')
        if tag_name == 'A':
            return True

        selector = get_css_selector_by_element(element)
        node = cdp.send("DOM.getDocument")
        params = {'nodeId': node['root']['nodeId'], 'selector': selector}
        query_res = cdp.send(method="DOM.querySelector", params=params)
        node_id = query_res['nodeId']
        remote_obj = cdp.send("DOM.resolveNode", {'nodeId': node_id})
        listeners = cdp.send('DOMDebugger.getEventListeners', {'objectId': remote_obj['object']['objectId']})

        if 'listeners' not in listeners:
            return False

        if not t:
            return len(listeners['listeners']) > 0
        else:
            for listener in listeners['listeners']:
                if listener['type'] == t:
                    return True
            return False
    except:
        return False


def close_target(cdp, targetId):
    try:
        cdp.send(method="Target.closeTarget", params={'targetId': targetId})
    except:
        pass


def click_element_on_page(context, page, element):
    cdp = context.new_cdp_session(page)
    targets_before = cdp.send(method="Target.getTargets")

    try:
        with context.expect_page(timeout=3000) as new_page_info:
            element.evaluate('element => element.click()')
        # 点击后，在超时前，产生了新页，地址栏中有网址
        new_page = new_page_info.value
        return True, new_page, get_window_location_href(new_page)
    except Exception as e:
        # 点击后，超时后，产生了新页， 但是新页在地址栏中没有url，只能用cdp来获取并判断和关闭，详见is_new_page_always_loading的实现
        targets_after = cdp.send(method="Target.getTargets")
        is_loading_page = is_new_page_always_loading(cdp, targets_before, targets_after)
        if is_loading_page:
            return True, None, ""

        # 点击后，超时后，没有产生新页
        # 虽然没有新页，但点击后地址栏中的地址可能会变，所以重新获取
        return False, page, get_window_location_href(page)


def get_window_location_href(page):
    try:
        return page.evaluate("window.location.href")
    except Exception as e:
        return ""


def is_new_page_always_loading(cdp, targets_before, targets_after):
    if targets_before and 'targetInfos' in targets_before and targets_after and 'targetInfos' in targets_after:
        before_pages = [x['targetId'] for x in targets_before['targetInfos'] if x['type'] == 'page']
        after_pages = [y['targetId'] for y in targets_after['targetInfos'] if y['type'] == 'page']

        difference = [z for z in after_pages if z not in before_pages]

        if len(difference) > 0:
            print("关闭始终处于加载状态的页面", difference[0])
            close_target(cdp, difference[0])
            return True
    return False


def main():
    pass


if __name__ == '__main__':
    main()
