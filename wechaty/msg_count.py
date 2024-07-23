import rumps
import subprocess
import redis
from pynput import keyboard
import logging
import os

# 注意使用Script Editor创建App
# do shell script "python3 $HOME/wechaty/tool/msg_count.py"
# 注意在Mac的安全与隐私设置中，把Accessibility和Input Monitoring都加入App


from logging.handlers import RotatingFileHandler

log_file_path = os.path.join(os.path.dirname(__file__), 'msg_count.log')

logging.basicConfig(
    handlers=[RotatingFileHandler(log_file_path, maxBytes=1*1024*1024, backupCount=2)],
    level=logging.DEBUG
)

class CounterApp(rumps.App):
    def __init__(self):
        super(CounterApp, self).__init__("0")
        self.r = redis.Redis(host='127.0.0.1', port=6379, db=0)
        self.menu = ["Reset Counter"]
        self.timer = rumps.Timer(self.tick, 1)
        self.timer.start()
        self.listener = None
        logging.debug('CounterApp initialized')

    def tick(self, _):
        count = int(self.r.get("msg_count") or 0)
        self.title = str(count)

    @rumps.clicked("Reset Counter")
    def reset(self, _=None):
        self.r.set("msg_count", 0)
        self.title = "0"
        file_path = os.path.expanduser('~/all.txt')
        subprocess.run(["open", file_path])
        logging.debug('Counter reset')

    def setup_hotkey(self):
        def on_activate():
            self.reset()

        def for_canonical(f):
            return lambda k: f(self.listener.canonical(k)) if self.listener is not None else None

        hotkey = keyboard.HotKey(
            keyboard.HotKey.parse('<ctrl>+<cmd>+z'),
            on_activate
        )

        self.listener = keyboard.Listener(
            on_press=for_canonical(hotkey.press),
            on_release=for_canonical(hotkey.release)
        )
        self.listener.start()
        logging.debug('Hotkey setup completed')

    def run(self):
        self.setup_hotkey()
        super(CounterApp, self).run()
        logging.debug('App running')

if __name__ == "__main__":
    CounterApp().run()

