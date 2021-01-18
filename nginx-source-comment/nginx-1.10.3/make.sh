make clean
./configure --with-debug \
--without-http_ssi_module \
--without-http_userid_module \
--without-http_auth_basic_module \
--without-http_split_clients_module \
--without-http_uwsgi_module \
--without-http_scgi_module \
--without-mail_pop3_module \
--without-mail_imap_module \
--without-mail_smtp_module \
--without-http_empty_gif_module \
--without-http_browser_module \
--without-http_upstream_hash_module \
--without-http_upstream_ip_hash_module \
--without-http_upstream_least_conn_module \
--without-http_upstream_keepalive_module \
--without-http_upstream_zone_module \
--without-http_auth_basic_module \
--without-http_limit_conn_module \
--without-http_limit_req_module \
--without-http_autoindex_module \
--without-http_geo_module \
--without-http_map_module \
--without-http_memcached_module \
--without-http_referer_module

line_number=`sed -n '/CFLAGS/=' objs/Makefile |head -n1`
echo $line_number
t=`awk NR==${line_number} objs/Makefile | awk -F 'CFLAGS =  -pipe  -O -W -Wall' '{print $2}'`
newline="CFLAGS =  -pipe  -W -Wall -g -ggdb3 $t"
sed -i "${line_number}d" objs/Makefile
sed -i "${line_number} a$newline" objs/Makefile
make -j8
