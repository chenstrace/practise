#!/bin/bash

# 检查是否提供了命令行参数
if [ -z "$1" ]; then
  echo "请提供一个文件名作为命令行参数。"
  exit 1
fi

# 获取文件名参数
filename="$1"
remark_dir="../remark"

# 检查文件是否存在
if [ -e "$remark_dir/$filename" ]; then
  echo "文件已存在，打开文件: $filename"
else
  if [ ! -e "100.py" ]; then
    echo "100.py 文件不存在，无法复制。"
    exit 1
  fi

  echo "文件不存在，从 100.py 复制创建文件: $filename"
  cp 100.py "$remark_dir/$filename" || { echo "无法复制文件"; exit 1; }

  # 提取文件名的无扩展名部分
  filename_without_extension="${filename%.*}"

  # 执行 python3 remark.py -a filename_without_extension
  python3 remark.py -a "$filename_without_extension" || { echo "无法执行 remark.py"; exit 1; }
fi

# 使用 open 命令打开文件
open "$remark_dir/$filename" || { echo "无法打开文件"; exit 1; }

