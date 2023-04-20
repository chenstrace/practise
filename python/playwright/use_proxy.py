from playwright.sync_api import Playwright, sync_playwright, TimeoutError as PlaywrightTimeoutError
import time

url = "https://www.google.com/"
proxy = {"server": "http://127.0.0.1:16088"}


def run(playwright: Playwright) -> None:
    browser = playwright.firefox.launch(headless=False, proxy=proxy)
    context = browser.new_context()
    page = context.new_page()
    page.goto(url)

    time.sleep(60)

    context.close()
    browser.close()


with sync_playwright() as playwright:
    run(playwright)
