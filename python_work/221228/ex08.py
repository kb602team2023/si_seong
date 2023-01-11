import urllib.request

myhome="https://finance.naver.com/item/sise.naver?code=012450"

# f=open(urllib.requset.urlopen(myhome))
# data=f.read()
# print(data)
# html.close()

from bs4 import BeautifulSoup

html=BeautifulSoup(urllib.request.urlopen(myhome),"html.parser")
# print(html)


text=html.find('strong',{id,'_nowVal'})
print(text)
print(f"현재가:{text.text}")
c=html.find('span',{'class','tah p11'})
print(c)
print(f"시가: {c.text}")
c=html.find_all('span',{'class','tah p11'})
print(f"고가: {c[2].text}")
c=html.find_all('span',{'class','tah p11'})
print(f"저가: {c[1].text}")