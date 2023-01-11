from selenium import webdriver
import time
import pyautogui
from bs4 import BeautifulSoup
import re
from products import Product

# inputvalue = pyautogui.prompt('상품이름을 입력하세요.')
# print(inputvalue)

inputvalue = '퓨마 운동화'

brow = webdriver.Chrome()   # 크롬브라우저 시작otepad
brow.get(f'https://www.coupang.com/np/search?q={inputvalue}&channel=user&component=&eventCategory=SRP&trcid=&traid=&sorter=scoreDesc&minPrice=&maxPrice=&priceRange=&filterType=&listSize=36&filter=&isPriceRange=false&brand=&offerCondition=&rating=0&page=2&rocketAll=false&searchIndexingToken=1=6&backgroundColor=')

html = brow.page_source # html 소스 가져오기
html = str(html).strip() # 공백제거
html = BeautifulSoup(html,'html.parser') #객체 변환

dl = html.find_all('dl',{'class','search-product-wrap'})
for tag in dl:
    print(tag)

# img = html.find_all('strong',{'class','price-value'})
# img = html.find_all('img',{'class','search-product-wrap-img'})




