import requests
from bs4 import BeautifulSoup
import re
from openpyxl import Workbook

wb=Workbook()
ws=wb.active

if ws.max_row==1:
    ws.append(['날짜','최저기온','최고기온'])

url="https://weather.naver.com/"

req=requests.get(url)
req.encoding="utf-8"


html=BeautifulSoup(req.content,"html.parser")

l=html.find_all('span',{'class','lowest'})
h=html.find_all('span',{'class','highest'})
d=html.find('span',{'class','date'})
text=re.sub("\W"," ",d.text.strip())
a=text.split()[0]+'월'+text.split()[1]+'일'


print(a)
print(h[0].text)
print(l[0].text)

ws.append([a,h[0].text,l[0].text])


wb.save('weather.xlsx')
wb.close()