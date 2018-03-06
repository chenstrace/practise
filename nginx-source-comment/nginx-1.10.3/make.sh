make clean
./configure --with-debug --without-http_ssi_module  --without-http_userid_module --without-http_auth_basic_module --without-http_split_clients_module --without-http_uwsgi_module --without-http_scgi_module --without-mail_pop3_module --without-mail_imap_module --without-mail_smtp_module
sed -i s/-O// objs/Makefile
make -j8
