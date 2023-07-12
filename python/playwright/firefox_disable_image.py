from playwright.sync_api import sync_playwright

with sync_playwright() as playwright:
    browser = playwright.firefox.launch(headless=True, firefox_user_prefs={
                                        "permissions.default.image": 2})
    context = browser.new_context()

    page = context.new_page()

    page.goto("https://www.lingoace.com/")

    print(page.title())

    context.close()
    browser.close()
