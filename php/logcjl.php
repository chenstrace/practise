<?php
if (!function_exists('getLogCjlFileName')) {

    function getLogCjlFileName($url)
    {
        if (empty($url)) {
            return '';
        }
        $arr = parse_url($url);
        if (empty($arr['path'])) {
            return '';
        }
        $pathArr = explode('/', $arr['path']);
        if (empty($pathArr)) {
            return '';
        }
        $pathArrTemp = array();
        foreach ($pathArr as $value) {
            if (!is_numeric($value)) {
                $pathArrTemp[] = $value;
            }
        }

        if (empty($pathArrTemp)) {
            return '';
        }
        $pathUnderline = implode('_', $pathArrTemp);
        if (empty($pathUnderline)) {
            return '';
        }

        $logPath = "logcjl";
        $d = date("Y-m-d");
        $logFilename = $logPath . $pathUnderline . '-' . $d . ".log";
        return $logFilename;
    }
}

if (!function_exists('logcjl')) {
    function logcjl($data)
    {
        $request_uri = $_SERVER['REQUEST_URI'];
        $log_file_name = getLogCjlFileName($request_uri);

        $home_dir = getenv("HOME");
        $log_file_name = $home_dir . "/" . $log_file_name;

        $data = var_export($data, true);

        if (is_string($data)) {
            file_put_contents($log_file_name, $data . "\n", FILE_APPEND);
        }
    }
}
