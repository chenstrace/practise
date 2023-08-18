import time

from playwright.sync_api import sync_playwright

with sync_playwright() as p:
    browser = p.chromium.launch(
        headless=False,
        args=["--blink-settings=imagesEnabled=false"]
    )
    context = browser.new_context()
    page = context.new_page()
    page.goto("https://sports.qq.com/")
    page.screenshot(path="screenshot.png")

    time.sleep(10)
    browser.close()
