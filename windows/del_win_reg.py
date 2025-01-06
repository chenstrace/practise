import os
import time
import ctypes
import sys
import winreg

# Define target registry paths
REG_PATHS = [
    r"*\shellex\ContextMenuHandlers\FortiClient",
    r"Folder\ShellEx\ContextMenuHandlers\FortiClient",
    r"*\shellex\ContextMenuHandlers\EPP",
    r"Directory\shellex\ContextMenuHandlers\EPP",
]

# Maximum retry attempts for each registry key
MAX_KEY_RETRIES = 10

def is_admin():
    """Check if the script is running with admin privileges."""
    try:
        return ctypes.windll.shell32.IsUserAnAdmin()
    except:
        return False

def registry_key_exists(reg_path):
    """Check if the registry key exists."""
    try:
        with winreg.OpenKey(winreg.HKEY_CLASSES_ROOT, reg_path, 0, winreg.KEY_READ):
            return True
    except FileNotFoundError:
        return False

def delete_registry_key(reg_path):
    """Attempt to delete the registry key."""
    try:
        with winreg.OpenKey(winreg.HKEY_CLASSES_ROOT, reg_path, 0, winreg.KEY_WRITE) as key:
            winreg.DeleteKey(key, "")
        return True
    except FileNotFoundError:
        return False
    except OSError as e:
        print(f"Error: {e}")
        return False

if not is_admin():
    print("Requesting admin privileges...")
    ctypes.windll.shell32.ShellExecuteW(None, "runas", sys.executable, " ".join(sys.argv), None, 1)
    exit()

deleted_count = 0

# Iterate over the registry paths and attempt deletion for each
for reg_path in REG_PATHS:
    delete_attempts = 0
    while delete_attempts < MAX_KEY_RETRIES:
        print(f"Attempting to delete registry key: {reg_path}, attempt {delete_attempts + 1}")
        
        if registry_key_exists(reg_path):  # Only attempt to delete if the key exists
            if delete_registry_key(reg_path):
                # Check if the registry key still exists
                if not registry_key_exists(reg_path):
                    print(f"Registry key {reg_path} successfully deleted!")
                    deleted_count += 1
                    break
                else:
                    print(f"Failed to delete registry key: {reg_path}")
            else:
                print(f"Failed to delete registry key: {reg_path}")
        else:
            print(f"Registry key {reg_path} does not exist.")
        
        delete_attempts += 1
        time.sleep(2)  # Wait before retrying if deletion failed or key wasn't found

    # If the maximum retry count is reached and key wasn't deleted, print a message
    if delete_attempts == MAX_KEY_RETRIES and registry_key_exists(reg_path):
        print(f"Registry key {reg_path} could not be deleted after {MAX_KEY_RETRIES} attempts.")

# Exit the script if all registry keys are deleted or not
if deleted_count == len(REG_PATHS):
    print("All registry keys deleted. Exiting script.")
else:
    print("Some registry keys were not deleted. Exiting script.")
