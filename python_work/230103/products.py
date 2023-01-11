import urllib.request
from openpyxl import Workbook
class products:
    def __init__(self,name,imgsrc,price):
        self.name=name
        self.imgsrc=imgsrc
        self.price=price
        urllib.request.urlretrieve(imgsrc,f'(name).jpg')

    def domakeexcel(self):
        print()