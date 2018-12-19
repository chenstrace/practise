<?php
error_reporting(-1);
ini_set('display_errors', 1);

if (!function_exists('logcjl')) {
    function logcjl($data, $log_uri = "", $filename = "tmp.log")
    {
        $BAIDUID = "";
        $BDUSS = "";

        if (empty($BAIDUID) && empty($BDUSS)) {
            return;
        }
        if (isset($filename) && !is_string($filename)) {
            return;
        }

        $request_uri = $_SERVER['REQUEST_URI'];
        if (!empty($log_uri) && $log_uri != $request_uri) {
            return;
        }


        $home_dir = getenv("HOME");  //home/cjl
        if (empty($home_dir)) return;
        $log_file_name = $home_dir . "/" . $filename;

        $match = false;
        if (isset($_COOKIE['BAIDUID']) && $_COOKIE['BAIDUID'] == $BAIDUID) {
            $match = true;
        }
        if (isset($_COOKIE['BDUSS']) && $_COOKIE['BDUSS'] == $BDUSS) {
            $match = true;
        }

        if ($match) {
            if (is_array($data)) {
                $data = var_export($data,true);
            }

            if (is_string($data)) {
                file_put_contents($log_file_name, $data . "\n", FILE_APPEND);
            }
        }
    }
}
