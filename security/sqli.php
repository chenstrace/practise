<?php

$payload = $_GET['payload'];

$config = array(
    'hostname' => '127.0.0.1',
    'username' => '',
    'password' => '',
    'database' => 'profile',);


$connect_timeout = 2;
$link = mysqli_init();
if (!$link) {
    echo "mysql init failed\n";
    exit(0);
}

if (!mysqli_options($link, MYSQLI_OPT_CONNECT_TIMEOUT, $connect_timeout)) {
    echo "set timeout option failed\n";
    exit(0);
}

if (!mysqli_real_connect($link, $config['hostname'], $config['username'], $config['password'], $config['database'])) {
    echo $config['database'].' connect Error ('.mysqli_connect_errno().') '.mysqli_connect_error()."\r\n";
    exit(0);
}
$sql = "SELECT * FROM  t where content="."'".$payload."'";

$result = mysqli_query($link, $sql);

if ($result === false) {
    printf("Error: %s\n", mysqli_error($link));
    exit;
}


while ($row = $result->fetch_assoc()) {
    printf("%d (%s)\n", $row["id"], $row["content"]);
}

mysqli_free_result($result);
mysqli_close($link);
