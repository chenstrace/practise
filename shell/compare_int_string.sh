#!/bin/bash
set -e
#两种风格的if判断
#test1 test2 test3 test4使用中括号[]的方式
#test5 test6 test7 test8使用C语言小括号()的方式

function test1(){
    local count=3
    if [ $count -gt 2 ];then
        echo "great than"
    else
        echo "not great than"
    fi
}

function test2(){
    local count=3
    if [ $count -gt "2" ];then
        echo "great than"
    else
        echo "not great than"
    fi
}


function test3(){
    local count="3"
    if [ $count -gt 2 ];then
        echo "great than"
    else
        echo "not great than"
    fi
}


function test4(){
    local count="3"
    if [ $count -gt "2" ];then
        echo "great than"
    else
        echo "not great than"
    fi
}

function test5(){
    local count=3
    if (( $count > 2 )) ;then
        echo "great than"
    else
        echo "not great than"
    fi
}

function test6(){
    local count=3
    if (( $count > "2" )) ;then
        echo "great than"
    else
        echo "not great than"
    fi
}

function test7(){
    local count="3"
    if (( $count > 2 )) ;then
        echo "great than"
    else
        echo "not great than"
    fi
}

function test8(){
    local count="3"
    if (( $count > "2" )) ;then
        echo "great than"
    else
        echo "not great than"
    fi
}

test1
test2
test3
test4

test5
test6
test7
test8
