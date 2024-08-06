import requests
from bs4 import BeautifulSoup
import subprocess
import sys

# 提取本地存储的html文件
filename = 'zhibo8.html'
url = 'https://zhibo8.com/index_old.htm'

subprocess.run(['wget', '-q', '-O', filename, url], check=True)

with open(filename, 'r', encoding='utf-8') as file:
    html_content = file.read()
soup = BeautifulSoup(html_content, 'lxml')

# 获取比分接口的数据
score_url = 'https://bifen4pc.qiumibao.com/json/list.htm'
response = requests.get(score_url)
score_data = response.json()

# 用字典将比赛id和比分及score_msg_full相关联
score_dict = {}
for match in score_data['list']:
    match_id = match['id']
    home_score = match['home_score']
    visit_score = match['visit_score']
    score_msg_full = match.get('score_msg_full', [])
    score_dict[match_id] = (home_score, visit_score, score_msg_full)

# 遍历页面中所有的 div.content 并提取ul和li信息
content_divs = soup.find_all('div', class_='content')
n = int(sys.argv[1]) if len(sys.argv) > 1 else 1
n = min(n, len(content_divs))

for i in range(n):
    content_div = content_divs[i]

    try:
        ul_element = content_div.find('ul')

        if ul_element:
            li_elements = ul_element.find_all('li')

            for li in li_elements:
                # 提取时间和链接(href)部分
                time = li['data-time']
                link = li.find('a')['href']

                # 提取比赛ID
                match_id = link.split('/')[-1].replace('match', '').replace('v.htm', '')

                # 提取比赛双方信息
                match_info = li.find('b').get_text(strip=True)

                # 从比分字典中提取比分和score_msg_full信息
                info = f"{time} {match_info}"
                if match_id in score_dict:
                    home_score, visit_score, score_msg_full = score_dict[match_id]
                    if home_score and visit_score:
                        score_msg_full_display = ' '.join(score_msg_full) if score_msg_full else ''
                        info = f"{time} {match_info} - 大分: {home_score}:{visit_score} - {score_msg_full_display}"
                print(info)

    except:
        pass
