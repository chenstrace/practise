from setuptools import setup, find_packages
from setuptools.command.install import install
from pathlib import Path
import os



import atexit
from setuptools.command.install import install
import os
from subprocess import check_output

def get_playwright_installation_path():
    try:
        # 使用 subprocess 来运行命令，并获取输出结果
        result = check_output(['pip', 'show', 'playwright']).decode('utf-8')
        # 在输出结果中找到包的位置信息
        lines = result.split('\n')
        for line in lines:
            if line.startswith('Location:'):
                return line.split('Location: ')[1].strip()
        # 如果没有找到，可以根据实际情况手动指定路径
        return None
    except Exception as e:
        print(f"Error: {e}")
        return None


def _post_install():
    playwright_path = get_playwright_installation_path()

    if playwright_path:
        a_js_path = os.path.join(playwright_path, 'playwright', 'driver', 'package', 'lib', 'server', 'har', 'harTracer.js')

    from modifier import modify_a_js
    modify_a_js(a_js_path)


class new_install(install):
    def __init__(self, *args, **kwargs):
        super(new_install, self).__init__(*args, **kwargs)
        atexit.register(_post_install)


setuptools.setup(
    name='my_har_modifier',
    version='0.1',
    packages=find_packages(),
    cmdclass={'install': new_install},
    install_requires=[
        'playwright',  # 添加对har_tracer的依赖
    ],
)


