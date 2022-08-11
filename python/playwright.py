from playwright.sync_api import sync_playwright
import time

with sync_playwright() as p:
    browser = p.chromium.launch(headless=False)


    page = browser.new_page()
    context = browser.new_context(record_har_path="example.har", record_har_mode='full')
    page.goto("https://www.baidu.com")
    print(page.title())
    context.close()

    browser.close()
