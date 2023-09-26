from playwright.sync_api import sync_playwright


def test_playwright(url="https://www.google.com", har_file="output.json"):

    with sync_playwright() as playwright:
        browser = playwright.chromium.launch(headless=True)
        context = browser.new_context(record_har_path=har_file)
        page = context.new_page()
        page.goto(url)
        page.close()
        context.close()
        browser.close()


if __name__ == '__main__':
    test_playwright("https://www.google.com/")
