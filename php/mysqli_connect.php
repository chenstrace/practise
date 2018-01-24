<?php
$databaseConfig['db1'] = array(
    'hostname' => '192.168.1.101',
    'username' => 'x',
    'password' => 'y',
    'database' => 'z',
);

$databaseConfig['db2'] = array(
    'hostname' => '192.168.1.102',
    'username' => 'a',
    'password' => 'b',
    'database' => 'c',
);


$connect_timeout = 2;
$failed = false;
foreach ($databaseConfig as $name => $config) {
    $link = mysqli_init();
    if (!$link) {
        echo 'mysql init failed';
        exit(0);
    }

    if (!mysqli_options($link, MYSQLI_OPT_CONNECT_TIMEOUT, $connect_timeout)) {
        echo 'set timeout option failed';
        exit(0);
    }

    if (!mysqli_real_connect($link, $config['hostname'], $config['username'], $config['password'], $config['database'])) {
        echo $config['database'] . ' connect Error (' . mysqli_connect_errno() . ') ' . mysqli_connect_error() . "\r\n";
        $failed = true;
    }
    mysqli_close($link);
}

if (!$failed) {
    echo "ok";
}