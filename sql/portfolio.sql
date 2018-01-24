set names utf8;
CREATE DATABASE profile DEFAULT CHARACTER SET utf8; 
set names utf8;
use profile;

set names utf8;
CREATE TABLE IF NOT EXISTS portfolio (
  `id` bigint(20) unsigned NOT NULL AUTO_INCREMENT COMMENT '自增id',
  `uin` bigint(20) unsigned NOT NULL DEFAULT '0' COMMENT 'uin',
  `create_time` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `update_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  `content` text COLLATE utf8_bin NOT NULL COMMENT '自选股数据',
  `version` bigint(20) unsigned NOT NULL DEFAULT '0' COMMENT '自选股版本号',
  PRIMARY KEY (`id`),
  UNIQUE KEY `idx_uin` (`uin`)
) ENGINE=InnoDB AUTO_INCREMENT=358 DEFAULT CHARSET=utf8 COLLATE=utf8_bin COMMENT='自选股相关' ;
