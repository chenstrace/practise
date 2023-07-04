class EventContextManager:
    def __init__(self, page):
        self.page = page
        self.value = None

    def __enter__(self):
        print("EventContextManager: 开始监听弹出窗口事件")
        return self

    def __exit__(self, exc_type, exc_value, traceback):
        print("EventContextManager: 停止监听弹出窗口事件")
        if self.page.new_page:
            self.value = self.page.new_page


class Page:
    def __init__(self, title):
        self._title = title
        self.new_page = None

    @property
    def title(self):
        return self._title

    def expect_popup(self):
        return EventContextManager(self)

    def get_by_role(self, element_type, name):
        print(f"Page: 获取元素类型为 '{element_type}'，名称为 '{name}' 的元素")
        return Locator(self)

    def create_new_page(self, title):
        self.new_page = Page(title)


class Locator:
    def __init__(self, page):
        self.page = page

    def click(self):
        print("Locator: 执行点击操作")
        self.page.create_new_page("新页面")


page = Page("原始页面")

with page.expect_popup() as popup_info:
    page.get_by_role("link", name="网盘").click()

popup_page = popup_info.value
print("其他操作...")
print("弹出窗口的标题:", popup_page.title)
