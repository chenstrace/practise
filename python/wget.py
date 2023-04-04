def download(url, filename):
    command = "/usr/bin/wget"
    timeout = "--timeout=5"
    waitretry = "--waitretry=3"
    tries = "--tries=3"
    output = "-O"

    c = [command, timeout, waitretry, tries, url, output, filename]

    subprocess.call(c)
