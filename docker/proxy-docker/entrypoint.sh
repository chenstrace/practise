#!/bin/bash


LISTEN_ARG="--listen=${LISTEN:-0.0.0.0:56080}"
CONNECT_ARG="--connect=${CONNECT:-127.0.0.1:1080}"
TUNNEL_CONNECT_ARG="--tunnel-connect=${TUNNEL_CONNECT:-ws://1.1.1.1:80/abcd}"
CRYPT_KEY_ARG="--crypt-key=${CRYPT_KEY:-123456}"

./tnet proxy $LISTEN_ARG $CONNECT_ARG $TUNNEL_CONNECT_ARG $CRYPT_KEY_ARG "$@"
