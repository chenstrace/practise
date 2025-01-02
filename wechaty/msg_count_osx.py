import rumps
import subprocess
import redis
from pynput import keyboard
import logging
import os
import redis
import time
# 注意使用Script Editor创建App
# do shell script "python3 $HOME/wechaty/tool/msg_count_osx.py"
# 注意在Mac的安全与隐私设置中，把Accessibility和Input Monitoring都加入App


from logging.handlers import RotatingFileHandler

log_file_path = os.path.join(os.path.dirname(__file__), 'msg_count.log')

logging.basicConfig(
    handlers=[RotatingFileHandler(log_file_path, maxBytes=1 * 1024 * 1024, backupCount=2)],
    level=logging.DEBUG
)


def get_icon_by_state(state):
    if state == 'R':
        return "🟢"
    else:
        return "🔴"


class CounterApp(rumps.App):
    def __init__(self):
        super(CounterApp, self).__init__("0")
        self.menu = ["Reset Counter"]
        self.timer = rumps.Timer(self.tick, 1)
        self.timer.start()
        self.listener = None
        self.title = "🔴0"
        self.redis = redis.Redis(host='127.0.0.1', port=6379, db=0)

        logging.debug('CounterApp initialized')

    def get_sate(self):
        state = "D"
        last_online_time = self.redis.get("last_online_time")
        current_time = int(time.time())
        # print("current_time:", current_time, flush=True)
        # print("last_online_time:", int(last_online_time), flush=True)
        delta = current_time - int(last_online_time)
        if last_online_time and delta < 10:
            state = "R"
        # print("state:", state, flush=True)
        # print("delta:", delta, flush=True)
        return state

    def tick(self, _):
        count = int(self.redis.get("msg_count") or 0)
        state = self.get_sate()
        icon = get_icon_by_state(state)
        self.title = icon + str(count)

    @rumps.clicked("Reset Counter")
    def reset(self, _=None):
        self.redis.set("msg_count", 0)

        self.title = self.title[:1] + "0"
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
