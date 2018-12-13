<?php
$hex_string = file_get_contents("php://stdin");
$binary = pack("H*",$hex_string);
$out_file = $argv[1];
file_put_contents($out_file,$binary);


