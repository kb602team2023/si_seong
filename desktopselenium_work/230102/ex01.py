from selenium import webdriver
import time
import pyautogui
# requests 인터넷 환면 없이 실행
# beatifulsoup
inputvalue=pyautogui.prompt('상품이름을 입력하세요')
print(inputvalue)

brow=webdriver.Chrome()
brow.get(f"https://www.coupang.com/np/search?component=&q={inputvalue}&channel=user")
brow.get(f"https://www.coupang.com/np/search?q={inputvalue}&channel=user&component=&eventCategory=SRP&trcid=&traid=&sorter=scoreDesc&minPrice=&maxPrice=&priceRange=&filterType=&listSize=36&filter=&isPriceRange=false&brand=&offerCondition=&rating=0&page=2&rocketAll=false&searchIndexingToken=1=6&backgroundColor=")
#
# inpu=brow.find_element('id','headerSearchKeyword')
# inpu.send_keys('퓨마 운동화')


brow.find_element('xpath','/html/body/div[3]/section/form/div[2]/div[2]/div[5]/span[2]/a[2]').click()


time.sleep(3)

print(brow.current_url)

# brow.close()
# brow.quit()
