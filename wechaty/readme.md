##  https://github.com/chenstrace/pycharm-cli
- 读取本机redis，获取要发送的内容及联系人，通过wechaty的API发送图片、文字消息。
- 消息到来时，写入聊天记录文件，未读消息数+1
- 支持发送给指定的联系人、群

##  msg_count.py
- 在menubar上展现未读消息数
- 快捷键: command + ctrl + z 弹出聊天记录文件，弹出后未读数清零


##  push_to_redis.py
- 读取指定文件100行及以后的内容，写入本机redis，即所谓的"发送"
- 支持读取剪切板上的图片

