from bs4 import BeautifulSoup
from selenium import webdriver
from selenium.webdriver.common.by import By
import time

url="https://www.weather.go.kr/w/index.do"
brow=webdriver.Chrome()
brow.get(url)
brow.find_element(By.XPATH,'//*[@id="content-body"]/div[3]/h2/a').click()
brow.find_element(By.XPATH,'//*[@id="content-body"]/div[3]/div/div/div[1]/ul/li[3]/a/span').click()
time.sleep(3)
html=brow.page_source
html=BeautifulSoup(html,"html.parser")