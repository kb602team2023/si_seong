import sys
from PyQt5.QtWidgets import *
from PyQt5 import uic

form_class=uic.loadUiType("221219/myxui.ui")[0]

class WindowClass(QMainWindow,form_class):
    def __init__(self):
        super().__init__()
        self.setupUi(self)

        self.e1.setText("asdfasdf")
        self.p1.clicked.connect(self.doA)

        self.p3.clicked.connect(self.do1010)

    def doA(self):
        print("test")

    def do1010(self):
        mub=myworkbook()
        mub.writer10c10
        
        
        
if __name__=="__main__":
    app=QApplication(sys.argv)
    myWindow = WindowClass()
    myWindow.show()
    app.exec_()
