const puppeteer = require('puppeteer');
const PuppeteerHar = require('puppeteer-har');


(async () => {
    const browser = await puppeteer.launch();
    const page = await browser.newPage();
    const client = await page.target().createCDPSession();

    const har = new PuppeteerHar(page);
    await har.start({ path: 'results.har' });
    await page.goto('https://www.baidu.com');

    //下面3行是可以正常工作的
    response = await client.send('Runtime.evaluate', { expression: 'document.querySelector("#hotsearch-refresh-btn")' });
    response = await client.send('DOMDebugger.getEventListeners', { objectId: response.result.objectId });
    console.log(response);

    //https://github.com/puppeteer/puppeteer/issues/8798
    element = await page.$('#hotsearch-refresh-btn');
    response = await element._client.send('DOMDebugger.getEventListeners', { objectId: element.remoteObject().objectId });
    console.log(response);

    await har.stop();
    await browser.close();
})();

