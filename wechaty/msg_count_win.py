import sys
import time
import redis
from PyQt5.QtWidgets import QApplication, QSystemTrayIcon, QMenu, QAction
from PyQt5.QtGui import QIcon, QPixmap
from PyQt5.QtCore import QTimer
from pynput import keyboard
from PIL import Image, ImageDraw, ImageFont
import io
import subprocess
import os


def open_record_file():
    file_path = os.path.join(os.path.expanduser('~'), 'wechaty', 'record.txt')

    if sys.platform == "win32":
        subprocess.run(["explorer", file_path])
    elif sys.platform == "darwin":
        subprocess.run(["open", file_path])
    else:
        subprocess.run(["xdg-open", file_path])


class TaskbarCounterApp:
    def __init__(self):
        self.icon = None
        self.app = QApplication(sys.argv)
        self.app.setQuitOnLastWindowClosed(False)

        self.counter = 0
        self.redis = redis.Redis(host='127.0.0.1', port=6379, db=0)

        # Create system tray icon
        self.create_icon(self.counter, 'D')  # Default to red icon ("D" state)
        self.tray_icon = QSystemTrayIcon()
        self.tray_icon.setIcon(self.icon)  # Use in-memory icon

        # Create tray menu
        self.menu = QMenu()

        self.reset_action = QAction("Open")

        self.reset_action.triggered.connect(self.on_menu_open_click)
        self.menu.addAction(self.reset_action)

        self.quit_action = QAction("Exit")
        self.quit_action.triggered.connect(self.quit_app)
        self.menu.addAction(self.quit_action)

        self.tray_icon.setContextMenu(self.menu)

        # Show tray icon
        self.tray_icon.show()
        self.tray_icon.activated.connect(self.on_click)

        # Start a timer to update the icon every second
        self.timer = QTimer()
        self.timer.timeout.connect(self.tick)
        self.timer.start(1000)  # Update every second

        # Set up global hotkeys (optional)
        self.listener = keyboard.GlobalHotKeys({
            '<ctrl>+<alt>+z': self.on_hotkey,
            '<alt>+l': self.on_hotkey,
        })
        self.listener.start()

        print('CounterApp initialized')

    def create_icon(self, number, state):
        if state == 'R':  # Green for "R" state
            img = Image.new("RGBA", (64, 64), (0, 255, 0))  # Green background for "R" state
        else:  # Red for "D" state
            img = Image.new("RGBA", (64, 64), (255, 0, 0))  # Red background for "D" state

        draw = ImageDraw.Draw(img)

        # Draw number in the center
        font = ImageFont.truetype("arial.ttf", 40)
        text = str(number)
        text_bbox = draw.textbbox((0, 0), text, font=font)  # Get text bounding box
        text_width = text_bbox[2] - text_bbox[0]
        text_height = text_bbox[3] - text_bbox[1]
        text_x = (64 - text_width) // 2
        text_y = (64 - text_height) // 2
        draw.text((text_x, text_y), text, fill="black", font=font)

        # Save icon to memory
        byte_io = io.BytesIO()
        img.save(byte_io, format="PNG")
        byte_io.seek(0)

        # Load image from memory to QPixmap, then to QIcon
        pixmap = QPixmap()
        pixmap.loadFromData(byte_io.read())
        self.icon = QIcon(pixmap)

    def get_state(self):
        state = "D"
        last_online_time = int(self.redis.get("last_online_time"))
        current_time = int(time.time())
        delta = current_time - last_online_time if last_online_time else 0
        if last_online_time and delta < 10:
            state = "R"
        return state

    def tick(self):
        count = int(self.redis.get("msg_count") or 0)
        state = self.get_state()
        self.create_icon(count, state)
        self.tray_icon.setIcon(self.icon)

    def reset_counter(self):
        self.redis.set("msg_count", 0)
        state = self.get_state()
        self.create_icon(0, state)
        self.tray_icon.setIcon(self.icon)

    def on_click(self, reason):
        if reason == QSystemTrayIcon.Trigger:
            print("Icon clicked!")
            self.handle_click()

    def on_hotkey(self):
        print("Hotkey pressed!")
        self.handle_click()

    def on_menu_open_click(self):
        print("Menu item clicked!")
        self.handle_click()

    def handle_click(self):
        self.reset_counter()
        open_record_file()

    def quit_app(self):
        QApplication.quit()

    def run(self):
        sys.exit(self.app.exec_())


if __name__ == "__main__":
    app = TaskbarCounterApp()
    app.run()
