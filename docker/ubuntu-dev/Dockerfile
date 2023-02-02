FROM ubuntu:22.04
ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y apt-utils
RUN ln -fs /usr/share/zoneinfo/Asia/Shanghai /etc/localtime

# Do not exclude man pages & other documentation
RUN rm /etc/dpkg/dpkg.cfg.d/excludes
# Reinstall all currently installed packages in order to get the man pages back
RUN dpkg -l | grep ^ii | cut -d' ' -f3 | xargs apt-get install -y --reinstall
RUN apt-get install -y build-essential man manpages-posix ragel flex bison \
    gdb netcat tcpdump iputils-ping traceroute \
    openssh-server cmake automake libtool strace \
    jq bzip2 unzip gzip zip lrzsz bc redis whois \
    telnet socat tcpdump git \
    bsdmainutils tzdata ntpdate ntp aria2 systemtap \
    php php-fpm php-bcmath php-mysql php-pgsql php-sqlite3 php-xml php-bz2 php-curl \
    php-zip php-memcached php-memcache php-redis php-mbstring php-apcu php-bcmath php-bz2 \
    php-calendar php-ctype php-curl php-date php-dba php-dom php-enchant php-exif \
    php-fileinfo php-ftp php-gd php-gmp php-iconv php-igbinary php-imap \
    php-interbase php-intl php-json php-ldap php-mbstring php-memcached php-mongodb php-mysqli \
    php-odbc php-pgsql  php-posix php-pspell php-readline  php-redis  php-shmop  \
    php-snmp php-soap php-sockets php-sqlite3  php-sysvmsg php-sysvsem php-sysvshm php-tidy \
    php-tokenizer  php-xml php-xmlreader php-xmlrpc php-xmlwriter php-xsl php-zip \
    software-properties-common \
    mysql-server default-jdk golang-go \
    nginx lua5.1 dnsutils libtinfo-dev libicu-dev libreadline-dev ascii \
    uuid-dev net-tools libssh-dev libssh2-1-dev libbrotli-dev libkrb5-dev libldap2-dev libidn2-dev libnghttp2-dev \
    libc-ares-dev librdkafka-dev libzookeeper-st-dev libssl-dev libhiredis-dev
RUN add-apt-repository ppa:jonathonf/vim && apt-get install -y vim-gtk
RUN apt-get install -y python3-pip
RUN pip3 install compiledb



RUN wget https://psysh.org/psysh && chmod +x psysh && mv psysh /usr/bin

RUN apt-get install -y curl python-is-python3
RUN pip3 install ipython

RUN apt-get clean autoclean
RUN apt-get autoremove --yes
RUN rm -rf /var/lib/{apt,dpkg,cache,log}/

#/usr/bin/redis-server --daemonize yes --protected-mode no
#service mysql start
#service nginx start

