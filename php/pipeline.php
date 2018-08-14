<?php
if ($argc != 3) {
    $argv0 = $argv[0];
    echo "usage: php $argv0 ip port\n";
    exit;
}

$ip = $argv[1];
$port = $argv[2];

$buf = "GET / HTTP/1.1\r\nUser-Agent: curl/7.85.0\r\nHost: $ip:$port\r\nAccept: */*\r\n\r\n";
$buf_404_a = "GET /a HTTP/1.1\r\nUser-Agent: curl/7.89.0\r\nHost: $ip:$port\r\nAccept: */*\r\n\r\n";
$buf_404_b = "GET /b HTTP/1.1\r\nUser-Agent: curl/7.90.0\r\nHost: $ip:$port\r\nAccept: */*\r\n\r\n";
$buf .= $buf_404_a . $buf_404_b;

$socket = socket_create(AF_INET, SOCK_STREAM, SOL_TCP);
$connect_ret = socket_connect($socket, $ip, $port);

$send_ret = socket_send($socket, $buf, strlen($buf), 0);
if ($send_ret === false) {
    echo "socket_send failed\n";
    exit;
}

$recv_buf = '';

while (1) {
    $bytes = socket_recv($socket, $recv_buf, 4096, 0);
    if ($bytes === false) {
        echo "socket_recv failed\n";
        exit;
    } else {
        echo $recv_buf;
    }
}
