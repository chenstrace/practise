import os

def modify_a_js(file_path):
    with open(file_path, 'r') as f:
        content = f.read()

    # 修改需要的部分
    content = content.replace('options.omitSecurityDetails = true;', 'options.omitSecurityDetails = false;')
    content = content.replace('options.omitTiming = true;', 'options.omitTiming = false;')
    content = content.replace('options.omitServerIP = true;', 'options.omitServerIP = false;')
    content = content.replace('options.omitSizes = true;', 'options.omitSizes = false;')
    content = content.replace('options.omitPages = true;', 'options.omitPages = false;')

    with open(file_path, 'w') as f:
        f.write(content)

if __name__ == "__main__":
    pass  # 此处不再需要执行修改操作

