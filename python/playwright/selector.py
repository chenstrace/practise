from playwright.sync_api import sync_playwright


def get_css_selector_by_element(element):
    s = """const gcs=e=>{for(var t,n=[];t=e.parentNode;)n.unshift(`${e.tagName}:nth-child(${[].indexOf.call(t.children,e)+1})`),e=t;return(""+n.join(" > ")).toLowerCase()};"""
    s += "element => gcs(element)"
    try:
        res = element.evaluate(s, element)
    except Exception as e:
        return ""
    return res


def get_xpath_selector_by_element(element):
    s = """(Elements={DOMPath:{}}).DOMPath.xPath=function(e,t){if(e.nodeType===Node.DOCUMENT_NODE)return"/";var n=[];let o=e;for(;o;){var r=Elements.DOMPath._xPathValue(o,t);if(!r)break;if(n.push(r),r.optimized)break;o=o.parentNode}return n.reverse(),(n.length&&n[0].optimized?"":"/")+n.join("/")},Elements.DOMPath._xPathValue=function(e,t){let n;var o=Elements.DOMPath._xPathIndex(e);if(-1===o)return null;switch(e.nodeType){case Node.ELEMENT_NODE:if(t&&e.getAttribute("id"))return new Elements.DOMPath.Step('//*[@id="'+e.getAttribute("id")+'"]',!0);n=e.localName;break;case Node.ATTRIBUTE_NODE:n="@"+e.nodeName;break;case Node.TEXT_NODE:case Node.CDATA_SECTION_NODE:n="text()";break;case Node.PROCESSING_INSTRUCTION_NODE:n="processing-instruction()";break;case Node.COMMENT_NODE:n="comment()";break;default:Node.DOCUMENT_NODE;n=""}return 0<o&&(n+="["+o+"]"),new Elements.DOMPath.Step(n,e.nodeType===Node.DOCUMENT_NODE)},Elements.DOMPath._xPathIndex=function(t){function n(e,t){return e===t||(e.nodeType===Node.ELEMENT_NODE&&t.nodeType===Node.ELEMENT_NODE?e.localName===t.localName:e.nodeType===t.nodeType||(e.nodeType===Node.CDATA_SECTION_NODE?Node.TEXT_NODE:e.nodeType)===(t.nodeType===Node.CDATA_SECTION_NODE?Node.TEXT_NODE:t.nodeType))}var o=t.parentNode?t.parentNode.children:null;if(!o)return 0;let r;for(let e=0;e<o.length;++e)if(n(t,o[e])&&o[e]!==t){r=!0;break}if(!r)return 0;let N=1;for(let e=0;e<o.length;++e)if(n(t,o[e])){if(o[e]===t)return N;++N}return-1},Elements.DOMPath.Step=class{constructor(e,t){this.value=e,this.optimized=t||!1}toString(){return this.value}};"""
    s += "element=>Elements.DOMPath.xPath(element,false)"
    try:
        res = element.evaluate(s, element)
    except Exception as e:
        return ""
    return res


def baidu_test():
    playwright = sync_playwright().start()
    browser = playwright.chromium.launch(headless=True)
    context = browser.new_context()
    page = context.new_page()
    page.goto("https://www.baidu.com/", timeout=60 * 1000)

    element = page.query_selector("#s-top-left > a:nth-child(4)")  # 贴吧
    out0 = element.evaluate("e=>e.outerHTML")
    print(out0)

    css_selector = get_css_selector_by_element(element)
    xpath_selector = get_xpath_selector_by_element(element)

    print(css_selector)
    print(xpath_selector)

    element_by_css = page.query_selector(css_selector)
    element_by_xpath = page.query_selector("/" + xpath_selector)  # playwright要求 xpath选择器以//开头，所以增加/

    out1 = element_by_css.evaluate("e=>e.outerHTML")
    out2 = element_by_xpath.evaluate("e=>e.outerHTML")
    print(out1)
    print(out2)

    assert out0 == out1 == out2


if __name__ == "__main__":
    baidu_test()
