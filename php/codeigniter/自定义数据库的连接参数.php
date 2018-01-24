<?php

defined('BASEPATH') OR exit('No direct script access allowed');

class T extends CI_Controller
{
    public function index()
    {
        $config['dsn'] = 'mysql:host=127.0.0.1;dbname=rss';
        $config['dbdriver'] = 'pdo';
        $config['username'] = 'root';
        $config['password'] = '';

        $this->db = $this->load->database($config, true);
        $this->db->select(array('id', 'content'));
        $this->db->from('t_rss_news');
        $res = $this->db->get();
        $res = $res->result_array();
        var_dump($res);
    }
}
