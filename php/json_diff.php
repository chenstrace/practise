<?php
function diff($a, $b)
{
    if (count($a) != count($b)) return true;
    foreach ($a as $item) {
        $ok = in_array($item, $b, true);
        if (!$ok) {
            return true;
        }
    }
    foreach ($b as $item) {
        $ok = in_array($item, $a, true);
        if (!$ok) {
            return true;
        }
    }
    return false;
}
function f($a, $b, &$path)
{
    if (gettype($a) != gettype($b)) {
        return false;
    }

    if (is_array($a)) {
        $keys_a = array_keys($a);
        $keys_b = array_keys($b);

        $d = diff($keys_a, $keys_b);
        if ($d) {
            return false;
        }
        foreach ($keys_a as $key) {
            $path[] = $key;
            $ok2 = f($a[$key], $b[$key], $path);
            if (!$ok2) {
                return false;
            }
            array_pop($path);
        }
        return true;
    } else {
        return $a === $b;
    }
}
$path = array();
$s = file_get_contents("filter.json.51");
$a = json_decode($s, true);
$s2 = file_get_contents("filter.json.centos");
$b = json_decode($s2, true);
$res = f($a, $b, $path);
var_dump($res);
var_dump(implode('==>', $path));

