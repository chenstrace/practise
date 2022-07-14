from selenium import webdriver
from selenium.webdriver import Firefox

def init_firefox_webdriver(proxy="", is_headless=True, page_load_timeout=30, script_timeout=30) -> Firefox:
    options = webdriver.FirefoxOptions()
    if is_headless:
        options.add_argument("--headless")

    profile = webdriver.FirefoxProfile()
    profile.set_preference("privacy.donottrackheader.enabled", False)
    profile.set_preference("privacy.resistFingerprinting", False)
    profile.set_preference("privacy.trackingprotection.pbmode.enabled", False)
    profile.set_preference("privacy.trackingprotection.enabled", False)

    firefox_capabilities = None
    if proxy:
        firefox_capabilities = webdriver.DesiredCapabilities.FIREFOX
        firefox_capabilities['marionette'] = True

        firefox_capabilities['proxy'] = {
            "proxyType": "MANUAL",
            "httpProxy": proxy,
            "sslProxy": proxy
        }

    firefox = webdriver.Firefox(firefox_profile=profile,
                                options=options, capabilities=firefox_capabilities)
    firefox.set_page_load_timeout(page_load_timeout)
    firefox.set_script_timeout(script_timeout)
    return firefox

if __name__ == '__main__':
    driver = init_firefox_webdriver(proxy = "0.0.0.0:56088",is_headless = False)
    driver.get("https://www.google.com")
