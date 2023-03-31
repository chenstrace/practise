import time

from playwright.sync_api import Playwright, sync_playwright


def slide_to_right(page, locator):
    try:
        box = locator.bounding_box()
        page.mouse.move(box['x'] + box['width'] / 2, box['y'] + box['height'] / 2)
        page.mouse.down()
        dst_x = box['x'] + box['width'] / 2 + 1000
        dst_y = box['y'] + box['height'] / 2
        page.mouse.move(dst_x, dst_y)
        page.mouse.up()
    except:
        print("slide_to_right exception", flush=True)


def run(playwright: Playwright) -> None:
    browser = playwright.chromium.launch(headless=False)
    context = browser.new_context()

    page = context.new_page()

    page.goto("https://student.lingoace.com/login.html?redirect=%2Fhome")

    page.get_by_placeholder("请输入电子邮箱或用户名").fill("chenstrace@163.com")

    page.get_by_role("textbox", name="请输入密码").fill("Reotest1234")

    page.get_by_role("presentation").nth(2).click()

    page.get_by_role("button", name="登录").click()

    dropbutton = page.locator(
        "body > div.el-dialog__wrapper > div > div.el-dialog__body > div > div.validation-slider-button.flex-center")

    slide_to_right(page, dropbutton)

    time.sleep(1000)
    # ---------------------
    context.close()
    browser.close()


with sync_playwright() as playwright:
    run(playwright)
