#!/usr/bin/python

import MySQLdb
import sys 

def main():
    try:
        conn = MySQLdb.connect("172.16.1.15","username","password","database_name",connect_timeout=1,charset="utf8")
        cur = conn.cursor()
        cur.execute("update portfolio set version=version+1 where uin=1165700")
        conn.commit()
        if cur.rowcount == 1:
            print "ok"
        else:
            print "not ok"

    except MySQLdb.Error, e:
        print e

    finally:    
        pass

if __name__ == "__main__":
    main()
