from bs4 import BeautifulSoup
from selenium import webdriver
from selenium.webdriver.common.by import By
import time
from openpyxl import Workbook,load_workbook
import os.path
from datetime import datetime



def weather1(selectValue1):
    print(f'selectValue1={selectValue1}')
    url="https://www.weather.go.kr/w/index.do"
    brow=webdriver.Chrome()
    brow.get(url)
    brow.find_element(By.XPATH,'//*[@id="content-body"]/div[3]/h2/a').click()
    brow.find_element(By.XPATH,'//*[@id="content-body"]/div[3]/div/div/div[1]/ul/li[1]/a/span').click()
    time.sleep(3)
    html=brow.page_source
    html=BeautifulSoup(html,"html.parser")
    b=html.find('dl',{'class',f"{selectValue1}"})
    city=b.select_one('dt')
    tem=b.select('span')
    result1=([city.text,tem[0].text,tem[1].text])
    return result1

