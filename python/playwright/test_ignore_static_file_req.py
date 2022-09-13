# -*- coding: UTF-8 -*-
import re
import time

from playwright.sync_api import sync_playwright, Route

if __name__ == '__main__':
    playwright = sync_playwright().start()
    browser = playwright.chromium.launch(headless=False)

    pattern = '^(?!.*\.(js|png|jpeg|jpg|gif|svg|bmp|tiff|svg|pdf|webp|ttf|tof|woff|woff2|xls|xlsx|ppt|pptx|mp3|mp4|mpeg|wma|wmv|avi)).*$'

    context = browser.new_context(record_har_path="test.har", record_har_url_filter=re.compile(pattern, re.IGNORECASE))
    page = context.new_page()

    page.goto("https://www.baidu.com/")

    context.close()
    # page.close()
    # browser.close()
    time.sleep(100000)
