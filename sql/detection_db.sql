/*
 Navicat Premium Data Transfer

 Source Server         : local
 Source Server Type    : MySQL
 Source Server Version : 80030 (8.0.30)
 Source Host           : localhost:3306
 Source Schema         : detection_db

 Target Server Type    : MySQL
 Target Server Version : 80030 (8.0.30)
 File Encoding         : 65001

 Date: 02/11/2022 11:59:39
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for detect_ability
-- ----------------------------
DROP TABLE IF EXISTS `detect_ability`;
CREATE TABLE `detect_ability` (
  `id` bigint unsigned NOT NULL AUTO_INCREMENT COMMENT '自增id',
  `detect_ability_id` bigint unsigned NOT NULL DEFAULT '0' COMMENT '检测能力id',
  `type` varchar(32) CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NOT NULL DEFAULT '' COMMENT 'Android 或 iOS 或 Website',
  `entrance` varchar(2048) CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NOT NULL DEFAULT '' COMMENT '检测脚本文件名',
  `method` int unsigned NOT NULL DEFAULT '0' COMMENT '1自动，2手动，3半手动',
  `desc` varchar(2048) CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NOT NULL DEFAULT '' COMMENT '能力描述，用于与检查项对应',
  `create_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `update_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  `status` int unsigned NOT NULL DEFAULT '0' COMMENT '1生效，0未生效',
  PRIMARY KEY (`id`),
  UNIQUE KEY `idx_detect_ability_id` (`detect_ability_id`)
) ENGINE=InnoDB AUTO_INCREMENT=419 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_bin COMMENT='检测能力表';

-- ----------------------------
-- Records of detect_ability
-- ----------------------------
-- ----------------------------
-- Table structure for detect_item
-- ----------------------------
DROP TABLE IF EXISTS `detect_item`;
CREATE TABLE `detect_item` (
  `id` bigint unsigned NOT NULL AUTO_INCREMENT COMMENT '自增id',
  `detection_id` bigint unsigned NOT NULL DEFAULT '0' COMMENT '检查项id',
  `type` varchar(32) CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NOT NULL DEFAULT '' COMMENT 'Android 或 iOS 或 Website',
  `detect_ability_id` bigint unsigned NOT NULL DEFAULT '0' COMMENT '检测能力id',
  `create_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `update_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  `status` int unsigned NOT NULL DEFAULT '0' COMMENT '1生效，0未生效',
  PRIMARY KEY (`id`),
  UNIQUE KEY `uniq_detection_id_type` (`detection_id`,`type`)
) ENGINE=InnoDB AUTO_INCREMENT=487 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_bin COMMENT='检查项表';

-- ----------------------------
-- Records of detect_item
-- ----------------------------
BEGIN;
-- ----------------------------
-- Table structure for detect_result
-- ----------------------------
DROP TABLE IF EXISTS `detect_result`;
CREATE TABLE `detect_result` (
  `id` bigint unsigned NOT NULL AUTO_INCREMENT COMMENT '自增id',
  `task_id` varchar(64) CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NOT NULL DEFAULT '' COMMENT 'task id',
  `asset_id` bigint unsigned NOT NULL DEFAULT '0' COMMENT 'asset id',
  `detection_id` bigint unsigned NOT NULL DEFAULT '0' COMMENT '检查项id',
  `type` varchar(32) CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NOT NULL DEFAULT '' COMMENT 'Android or iOS or Website',
  `result` text CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NOT NULL COMMENT '检测结果，json字符串，{"result":"pass"}表成功，{"result":"fail"}表失败',
  `info` text CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NOT NULL COMMENT '检测过程信息',
  `create_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `update_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  `marked_status` int unsigned NOT NULL DEFAULT '0' COMMENT '0未标记，1标记resolved',
  `status` int unsigned NOT NULL DEFAULT '0' COMMENT '1检测中，2检测完成',
  PRIMARY KEY (`id`),
  KEY `idx_task_asset_detection` (`task_id`,`asset_id`,`detection_id`)
) ENGINE=InnoDB AUTO_INCREMENT=581 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_bin COMMENT='检测结果表';

-- ----------------------------
-- Records of detect_result
-- ----------------------------
-- Table structure for task_info
-- ----------------------------
DROP TABLE IF EXISTS `task_info`;
CREATE TABLE `task_info` (
  `id` int NOT NULL AUTO_INCREMENT,
  `task_id` varchar(64) CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NOT NULL DEFAULT '' COMMENT '任务uuid',
  `asset_id` bigint NOT NULL DEFAULT '0' COMMENT '资产id',
  `scan_id` bigint NOT NULL DEFAULT '0' COMMENT 'Portal传入的scan_id，可用于诊断问题',
  `type` varchar(32) CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NOT NULL DEFAULT '' COMMENT '取值为Android或iOS或Website',
  `url` text CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NOT NULL COMMENT '网站url，App下载地址',
  `filename` text CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NOT NULL COMMENT 'App文件名称，如果type是web，filename为空',
  `md5` varchar(256) CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NOT NULL DEFAULT '' COMMENT 'App文件md5，如果type是web，md5为空',
  `status` int NOT NULL DEFAULT '-1' COMMENT '任务状态：0未分发、1已分发',
  `status_traffic_auto` int NOT NULL DEFAULT '-1' COMMENT 'method为traffic_auto的任务状态: 0未分发、1已分发',
  `create_time` bigint NOT NULL DEFAULT '0' COMMENT '任务创建时间，timestamp',
  PRIMARY KEY (`id`) USING BTREE,
  UNIQUE KEY `asset_id` (`asset_id`)
) ENGINE=InnoDB AUTO_INCREMENT=418 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_bin COMMENT='检测任务表';

-- ----------------------------
-- Records of task_info
-- ----------------------------

SET FOREIGN_KEY_CHECKS = 1;
