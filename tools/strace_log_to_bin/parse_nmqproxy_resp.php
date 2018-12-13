<?php

$data = file_get_contents("out.bin");
$arr = mc_pack_pack2array($data);
var_dump($arr);
