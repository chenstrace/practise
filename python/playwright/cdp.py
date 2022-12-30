from playwright.sync_api import sync_playwright

playwright = sync_playwright().start()
browser = playwright.chromium.launch(headless=True)
ua = 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_14_6) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/104.0.0.0 Safari/537.36'
context = browser.new_context(user_agent=ua)
page = context.new_page()
href = "https://www.baidu.com/"
page.goto(href, timeout=20 * 1000)

cdp = context.new_cdp_session(page)
Node = cdp.send("DOM.getDocument")  # Node中有nodeId

nodeId = Node['root']['nodeId']
params = {'nodeId': nodeId, 'selector': "#s-usersetting-top"}

array_nodeId = cdp.send(method="DOM.querySelectorAll", params=params)
print("querySelectorAll return", array_nodeId)
if array_nodeId:
    nodeIds = array_nodeId['nodeIds']
else:
    nodeIds = []

for nodeid in nodeIds:
    remote_obj = cdp.send("DOM.resolveNode", {'nodeId': nodeid})
    print(remote_obj)
    listeners = cdp.send('DOMDebugger.getEventListeners', {'objectId': remote_obj['object']['objectId']})
    print(listeners)
