#!/bin/bash

# 检查是否提供了命令行参数
if [ -z "$1" ]; then
  echo "请提供一个文件名作为命令行参数。"
  exit 1
fi

# 获取文件名参数
filename="$1"
remark_dir="../remark"

# 提取文件名的无扩展名部分
filename_without_extension="${filename%.*}"

# 执行 python3 remark.py -d filename_without_extension
python3 remark.py -d "$filename_without_extension" || { echo "无法执行 remark.py -d"; exit 1; }

# 删除文件
rm "$remark_dir/$filename" || { echo "无法删除文件"; exit 1; }
echo "删除文件: $remark_dir/$filename"
