import feedparser
import string
from bs4 import BeautifulSoup
import requests
import hashlib
import MySQLdb
import datetime
import time


def md5(str):
    import hashlib
    m = hashlib.md5()
    m.update(str)
    return m.hexdigest()


def insert(url, title, content, publish_time, channel=''):
    url = MySQLdb.escape_string(url.encode("utf8"))
    title = MySQLdb.escape_string(title.encode("utf8"))
    content = MySQLdb.escape_string(content.encode("utf8"))
    md5_str = md5(MySQLdb.escape_string(url.encode("utf8")))
    publish_time = MySQLdb.escape_string(publish_time.encode("utf8"))
    title_md5 = md5(title)

    sql = "INSERT INTO t_rss_news(url,title,content,md5,channel,publish_time,title_md5) \
       VALUES ('%s','%s','%s', '%s', '%s', '%s','%s')" % \
          (url, title, content, md5_str, channel, publish_time,title_md5)

    try:
        conn = MySQLdb.connect("127.0.0.1", "root", "", "rss", connect_timeout=1, charset="utf8")
        cur = conn.cursor()
        cur.execute(sql)
        conn.commit()
        if cur.rowcount == 1:
            print "ok"
        else:
            print "not ok"

    except MySQLdb.Error, e:
        print e

    finally:
        pass


rss_url = 'http://rss.jrj.com.cn/hk/493.xml'
feeds = feedparser.parse(rss_url)

count = len(feeds.entries)

channel = 'jrj'

for i in range(count):
    #    print feeds.entries[i].title
    #    print feeds.entries[i].link
    #    print feeds.entries[i].author
    #    print feeds.entries[i].category
    #    print feeds.entries[i].published
    published = feeds.entries[i].published
    struct_time = time.strptime(published, '%d %b %Y %H:%M:%S GMT')
    timestamp = int(time.mktime(struct_time)) + 28800
    publish_time = time.strftime("%Y-%m-%d %H:%M:%S", time.localtime(timestamp))

    url = feeds.entries[i].link
    title = feeds.entries[i].title
    resp = requests.get(url)
    resp.encoding = "gb18030"
    html = resp.text
    soup = BeautifulSoup(html, 'html.parser')
    text_div = soup.findAll("div", {"class": "texttit_m1"})
    r = text_div.pop()
    p = r.findAll("p")
    p_list = []
    for i in p:
        p_list.append(string.strip(i.get_text()))
        p_list.append("\n")
    content = ''.join(p_list)
    insert(url, title, content, publish_time, channel)
