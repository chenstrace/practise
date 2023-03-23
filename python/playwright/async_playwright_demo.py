from playwright.async_api import async_playwright

async with async_playwright() as p:
    browser = await p.chromium.launch(headless=True)
    context = await browser.new_context()
    page = await context.new_page()
    await page.goto("https://www.example.com")
    await page.screenshot(path="example.png")
    await browser.close()
