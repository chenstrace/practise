from time import sleep
import requests


lines = """chenstrace/AcgClub
chenstrace/ActionBar-PullToRefresh
chenstrace/advanced-go-programming-book
chenstrace/advanced-java
chenstrace/aho-corasick
chenstrace/AI-Driven-WAF
chenstrace/AI_Security_Library
chenstrace/algorithm-archive
chenstrace/algorithms
chenstrace/alilua
chenstrace/amazon-polly-batch
chenstrace/android-architecture
chenstrace/android-cube-app
chenstrace/android-dynamic-listview-picasa
chenstrace/android-open-project
chenstrace/Android-PullToRefresh
chenstrace/android-Ultra-Pull-To-Refresh
chenstrace/AndroidImageSlider
chenstrace/AndroidStaggeredGrid
chenstrace/android_basic_demo
chenstrace/aria2gui
chenstrace/arthas
chenstrace/AsymmetricGridView
chenstrace/awesome-android-cn
chenstrace/awesome-c
chenstrace/awesome-programming-books
chenstrace/Awesome-WAF
chenstrace/beanstalk-munin
chenstrace/BiLiBiLi
chenstrace/bnf-plus-plus
chenstrace/bnfc
chenstrace/cas
chenstrace/cell
chenstrace/chromephp
chenstrace/CppCon2019
chenstrace/CppCoreGuidelines
chenstrace/CS-Notes
chenstrace/daemon
chenstrace/DanmakuFlameMaster
chenstrace/delve
chenstrace/docker_nginx_modsecurity
chenstrace/dragon-book-exercise-answers
chenstrace/EventBus
chenstrace/f8app
chenstrace/fcmm
chenstrace/feed
chenstrace/feeds
chenstrace/FlameGraph
chenstrace/FrameworkBenchmarks
chenstrace/fresco
chenstrace/GankWithZhihu
chenstrace/gflags
chenstrace/glog
chenstrace/go-daemon
chenstrace/google-glog
chenstrace/gore
chenstrace/goSnowFlake
chenstrace/graceful-shutdown-spring-boot
chenstrace/gson
chenstrace/hexo
chenstrace/hexo-theme-bootstrap-blog
chenstrace/hexo-toc
chenstrace/hooker
chenstrace/httpie
chenstrace/IDA7.0_SP
chenstrace/ijkplayer
chenstrace/ijkplayer-integrating-demo
chenstrace/IntelliJDashPlugin
chenstrace/jadx
chenstrace/java-compiler
chenstrace/java-design-patterns
chenstrace/Java_Books
chenstrace/JSON-c
chenstrace/jumpserver
chenstrace/kubernets-learn
chenstrace/labs
chenstrace/language-grammars
chenstrace/leetcode
chenstrace/leetcode-1
chenstrace/Leetcode-1-300
chenstrace/Level-Hashing
chenstrace/libdetection
chenstrace/libtask
chenstrace/lightbulb-framework
chenstrace/LookLook
chenstrace/lua-resty-http
chenstrace/lua-resty-repl
chenstrace/LuaAutoC
chenstrace/LuaHelp
chenstrace/Marpa--R2
chenstrace/maven-hello-world
chenstrace/miaosha
chenstrace/ModSecurity-Rule-Parser
chenstrace/mpm
chenstrace/MyBlog
chenstrace/mySIMBL
chenstrace/my_toy_compiler
chenstrace/naxsi
chenstrace/NetEasyNews
chenstrace/nginx-openresty-windows
chenstrace/nginx-tuning
chenstrace/ngx_lfqueue
chenstrace/ngx_php
chenstrace/NineOldAndroids
chenstrace/onekey-decompile-apk
chenstrace/opencc4php
chenstrace/openfolder
chenstrace/openresty-systemtap-toolkit
chenstrace/openvpn-install
chenstrace/os-tutorial
chenstrace/packetdrill
chenstrace/parser
chenstrace/php-amqplib
chenstrace/php-multi-curl
chenstrace/php-osx
chenstrace/php7-internal
chenstrace/php_snowflake
chenstrace/phuip-fpizdam
chenstrace/picasso
chenstrace/Player_Demo
chenstrace/raptor_waf
chenstrace/re2
chenstrace/reading-code-of-nginx-1.9.2
chenstrace/redis_nginx_adapter
chenstrace/regex2dfa
chenstrace/resty-cli
chenstrace/rhscl-dockerfiles
chenstrace/RollingCurlX
chenstrace/RxjavaRetrofitDemo-string-master
chenstrace/Scut_cs_homework
chenstrace/SendIP
chenstrace/setup-ipsec-vpn
chenstrace/Shell
chenstrace/SmartRecom
chenstrace/snowflake
chenstrace/snowflaked
chenstrace/spf13-vim
chenstrace/spring-boot-examples
chenstrace/spring-boot-multi-redis-demo
chenstrace/spring-session-samples
chenstrace/springboot-integration-examples
chenstrace/springboot-learning-example
chenstrace/SQL
chenstrace/sql-parser
chenstrace/sqlfun
chenstrace/sqli-labs
chenstrace/sqlinjection-detect
chenstrace/ssh-auto-login-manage
chenstrace/Summit_PPT
chenstrace/swoole-src
chenstrace/tcpppl_answers
chenstrace/tech-interview-handbook
chenstrace/testenv
chenstrace/The-Art-Of-Programming-By-July
chenstrace/the-super-tiny-compiler
chenstrace/UDPping
chenstrace/ultimate-go
chenstrace/Validation
chenstrace/Videoliveplatform
chenstrace/w3af
chenstrace/wafw00f
chenstrace/weiciyuan
chenstrace/WeYueReader
chenstrace/XListView-Android
chenstrace/XX-Mini
chenstrace/XX-Net
chenstrace/yaxx
chenstrace/yf-phplib
chenstrace/YiLan
chenstrace/you-get"""


repos = lines.splitlines()

url = "https://api.github.com/repos/{}/{}"
urls = []
for line in repos:
    name, repo = line.strip().split("/")
    urls.append(url.format(name, repo))

headers = {
    "Accept": "application/vnd.github.v3+json",
    "Authorization": "token token_here",  # 这里修改token
    "X-OAuth-Scopes": "repo"
}

for l in urls:
    print(l)
    requests.delete(url=l, headers=headers)
    sleep(2)
