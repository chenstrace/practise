import os
import rumps
import subprocess
import redis
from pynput import keyboard


class CounterApp(rumps.App):
    def __init__(self):
        super(CounterApp, self).__init__("0")
        self.r = redis.Redis(host='127.0.0.1', port=6379, db=0)
        self.menu = ["Reset Counter"]
        self.timer = rumps.Timer(self.tick, 1)
        self.timer.start()
        self.listener = None

    def tick(self, _):
        count = int(self.r.get("msg_count") or 0)  # Handle possibility of 'None' from Redis
        self.title = str(count)

    @rumps.clicked("Reset Counter")
    def reset(self, _=None):
        self.r.set("msg_count", 0)
        self.title = "0"
        file_path = os.path.expanduser('~/all.txt')  # Update this path as needed
        subprocess.run(["open", file_path])

    def setup_hotkey(self):
        def on_activate():
            self.reset()

        # Define a helper function to handle hotkey press and release
        def for_canonical(f):
            return lambda k: f(self.listener.canonical(k)) if self.listener is not None else None

        # Create a HotKey object for the hotkey listener
        hotkey = keyboard.HotKey(
            keyboard.HotKey.parse('<ctrl>+<cmd>+z'),
            on_activate
        )

        # Create the listener and start it
        self.listener = keyboard.Listener(
            on_press=for_canonical(hotkey.press),
            on_release=for_canonical(hotkey.release)
        )
        self.listener.start()

    def run(self):
        self.setup_hotkey()
        super(CounterApp, self).run()


if __name__ == "__main__":
    CounterApp().run()
