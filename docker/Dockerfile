FROM centos:7.6.1810

RUN sed -i s/tsflags=nodocs// /etc/yum.conf && \
yum install --nogpgcheck -y epel-release yum-fastestmirror && \ 
sed -i s/enabled=0/enabled=1/ /etc/yum.repos.d/CentOS-Debuginfo.repo && \ 
rpm -Uvh https://mirror.webtatic.com/yum/el7/webtatic-release.rpm && \
yum install --nogpgcheck -y deltarpm expect
#--downloadonly --downloaddir=/root
RUN unbuffer yum install  --nogpgcheck -y -x php70w-mysqlnd \
man \
man-pages \
php70* \
kernel-devel \
kernel-headers \
kernel-debuginfo \
vim \
gcc-c++ \
gdb \
java-1.8.0-openjdk \
java-1.8.0-openjdk-devel \
initscripts  \
pcre-devel \
bzip2 \
unzip \
gzip \
zip \
zlib-devel \
make \
patch \
openssl-devel \
mariadb-devel \
mariadb-libs \
psmisc \
telnet \
nc \
nmap-ncat  \
socat \
tcpdump \
supervisor  \
lrzsz \
bc \
redis \
wget \
strace \
git \
subversion \
go \
flex \
flex-devel \
bison \
bison-devel \
wireshark \
wireshark-devel \
whois \
byacc \
cpaste\
dos2unix \
elfutils \
ftp* \
gdb-gdbserver \
gperf \
gperftools psysh \
automake \
libtool \
re2c \
nasm \
bridge-utils \
ipython \
boost-devel \
http-parser-devel \
http-parser \
w3m \
w3m-img \
uuid \
ustr-devel ustr \
userspace-rcu userspace-rcu-devel \
tree tcl traceroute readline readline-devel memcached* rsyslog tcpflow tcpreplay thrift thrift-devel protobuf* \
tftp* proftpd* fcgi* etcd*


RUN yum -y groupinstall "Development Tools"


RUN wget https://dev.mysql.com/get/mysql57-community-release-el7-9.noarch.rpm -P /root && \
    rpm -ivh /root/mysql57-community-release-el7-9.noarch.rpm && \
    unbuffer yum install -y --nogpgcheck mysql-server
