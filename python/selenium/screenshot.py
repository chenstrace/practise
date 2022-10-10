
from selenium.webdriver.chrome.options import Options
from seleniumwire import webdriver


def create_webdriver(window_width: int, window_height: int, seleniumwire_options=None, user_data_dir='', profile_dir='',
                     display_browser=False):
    options = Options()
    options.add_argument('--no-sandbox')

    if not display_browser:
        options.add_argument("--headless")
    else:
        options.add_argument("--auto-open-devtools-for-tabs")

    options.add_experimental_option(
        'prefs', {'intl.accept_languages': 'en,en_US'})

    if user_data_dir and profile_dir:
        options.add_argument("--user-data-dir=" + user_data_dir)
        options.add_argument('--profile-directory=' + profile_dir)

    if seleniumwire_options:
        driver = webdriver.Chrome(
            options=options, seleniumwire_options=seleniumwire_options)
    else:
        driver = webdriver.Chrome(options=options)

    driver.set_window_size(window_width, window_height)
    return driver


def screenshot(driver, image_save_path, full_page=False):
    try:
        if full_page:
            # selenium原生并不支持截全屏，想要实现截全屏，先将窗口拉长，截图之后再恢复
            org_size = driver.get_window_size()
            org_width = org_size['width']
            org_height = org_size['height']

            # maximize window size
            new_width = driver.execute_script(
                "return document.documentElement.scrollWidth")
            new_height = driver.execute_script(
                "return document.documentElement.scrollHeight")
            driver.set_window_size(new_width, new_height)

            # screenshot
            driver.save_screenshot(image_save_path)

            # restore window size
            driver.set_window_size(org_width, org_height)
        else:
            driver.save_screenshot(image_save_path)
    except Exception as e:
        print("Exception during screenshot %s" % driver.current_url)
        return False

    return True


def main():
    driver = create_webdriver(1024, 768, None, '', '', False)
    driver.get('https://movie.douban.com/top250')
    screenshot(driver, "douban.png", True)


if __name__ == '__main__':
    main()
