from bs4 import BeautifulSoup
import subprocess

filename = 'zhibo8.html'
url = 'https://zhibo8.com/index_old.htm'

subprocess.run(['wget', '-O', filename, url], check=True)

with open(filename, 'r', encoding='utf-8') as file:
    html_content = file.read()
soup = BeautifulSoup(html_content, 'lxml')

content_divs = soup.find_all('div', class_='content')

for content_div in content_divs:
    try:
        ul_element = content_div.find('ul')

        if ul_element:
            li_elements = ul_element.find_all('li')

            for li in li_elements:
                time = li['data-time']
                match_info = li.find('b').get_text(strip=True)
                print(f"{time} {match_info}")
    except:
        pass
