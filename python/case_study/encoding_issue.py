# -*- coding: utf-8 -*-
import sys

#
# print sys.getdefaultencoding()
# a = '中A陈'
# print len(a)  # 7
# print type(a)  # str
#
# b = u'中A陈'
# print len(b)  # 3
# print type(b)  # unicode
#
# c = 'A'
# print len(c)  # 1
# print type(c)  # str
#
# d = u'A'
# print len(d)  # 1
# print type(d)  # unicode

import sys
# reload(sys)
# sys.setdefaultencoding('utf-8')
d = {1: 2, '1': '2', '你好': 'hello'}

print '你好' == u'你好'


def key_in_dict(key):
    if key in d:
        return True
    return False


def key_found_in_dict(key):
    for _key in d:
        if _key == key:
            return True
    return False


# print(key_in_dict('你好'))
# print(key_found_in_dict('你好'))
#
# print(key_in_dict(u'你好'))
# print(key_found_in_dict(u'你好'))
