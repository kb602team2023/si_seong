from bs4 import BeautifulSoup
from selenium import webdriver
import time
from openpyxl import Workbook,load_workbook
import os.path

if os.path.isfile('weather.xlsx'):
    wb=load_workbook('weather.xlsx')
else:
    wb=Workbook()

ws = wb.active

# if ws.max_row==1:
#     ws.append(['날짜','도시','날씨','온도'])
ws.append(['날짜','도시','날씨','온도'])
url="https://www.weather.go.kr/w/index.do"

brow=webdriver.Chrome()
brow.get(url)

time.sleep(3)
html=brow.page_source

html=BeautifulSoup(html,"html.parser")

a=html.find('dl',{'class','po_143'})
city=a.select_one("dt")
weather=a.select_one("i")
tem=a.select_one("span")
data=time.strftime("%m" "%d",time.localtime(time.time()))
result=([data,city.text,weather.text,tem.text])
print([data,city.text,weather.text,tem.text]) 