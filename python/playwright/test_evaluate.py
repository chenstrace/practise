import json
import time

from playwright.sync_api import sync_playwright

with sync_playwright() as p:
    url = "https://www.baidu.com/"

    browser = p.chromium.launch(headless=False)

    context = browser.new_context(record_har_path="playwright_test.har")
    page = context.new_page()

    page.goto(url, timeout=10 * 1000, wait_until='domcontentloaded')
    elements = page.query_selector_all("//a")

    for element in elements:
        a = element.evaluate("element=>element.outerHTML")
        b = element.evaluate("x=>x.outerHTML")  # 这里x是一个占位符
        c = page.evaluate("element=>element.outerHTML", element)
        d = page.evaluate("z=>z.outerHTML", element)
        assert a == b and a == c and a == d and b == c and b == d and c == d

    storage_state = page.context.storage_state()
    local_storage_1 = page.evaluate('() => window.localStorage')  # 没有参数的写法
    local_storage_2 = page.evaluate('window.localStorage')
    local_storage_3 = {item['name']: item['value']
                       for item in storage_state['origins'][0]['localStorage']}

    assert local_storage_1 == local_storage_2
    assert local_storage_1 == local_storage_3

    page.evaluate("y=>window.scrollTo(0,y);", 3500)

    s = """const myadd=(x,y)=>{return x+y;};"""
    s += "([xx,yy]) => myadd(xx,yy)"
    result = page.evaluate(s, [12, 13])
    print(result)

    s = """const mul2=(x)=>{return x*2;};"""
    s += "([xx]) => mul2(xx)"
    result = page.evaluate(s, [12])
    print(result)

    s = """const mul3=(x)=>{return x*3;};"""
    s += "(xx) => mul3(xx)"
    result = page.evaluate(s, 13)
    print(result)

    s = """const mysub=(x,y)=>{return x-y;};"""
    s += "mysub(100,1)"
    result = page.evaluate(s)
    print(result)

    context.close()
    browser.close()
    print("program end", flush=True)
