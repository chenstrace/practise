def visit_local_html(file_path):
    with sync_playwright() as p:
        browser = p.chromium.launch()
        page = browser.new_page()
        if not file_path.startswith('file://'):
            file_path = 'file://' + file_path.replace("\\", "/")
        page.goto(file_path)
        print(page.content())
        browser.close()

visit_local_html('/path/to/html/file')
