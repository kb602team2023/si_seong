import requests
from bs4 import BeautifulSoup
import re
from openpyxl import Workbook

wb=Workbook()
ws=wb.active

if ws.max_row==1:
    ws.append(['날짜','최저기온','최고기온'])

url="https://m.yna.co.kr/weather/country"

req=requests.get(url)
req.encoding="utf-8"


html=BeautifulSoup(req.content,"html.parser")

a=html.find('p',{'class','city-name'})
print(a)
# b=html.find('p')
# print(b)


# wb.save('weather.xlsx')
# wb.close()