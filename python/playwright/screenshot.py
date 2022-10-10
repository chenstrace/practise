import json
import time

from playwright.sync_api import sync_playwright

with sync_playwright() as p:
    url = 'https://www.wukongsch.com'

    browser = p.chromium.launch()

    context = browser.new_context()
    page = context.new_page()

    context.goto(url, timeout=10 * 1000)

    time.sleep(10)

    context.screenshot(path="f2.png", full_page=True)
    time.sleep(10)

    # elem = page.query_selector(
    #     "//html/body/div[3]/div[1]/div/div[1]/ol/li[2]/div/div[2]/div[1]/a/span[2]")
    # elem.screenshot(path="f3.png")

    context.close()
    browser.close()

    print("end")
