import sys
from PyQt5.QtWidgets import QApplication, QWidget, QPushButton, QVBoxLayout, QTextEdit


class MyApp(QWidget):

    def __init__(self):
        super().__init__()
        self.initUI()

    def initUI(self):
        btn1 = QPushButton("버튼1",self)
        btn2 = QPushButton("버튼2",self)
        btn3 = QPushButton("버튼3",self)

        self.te = QTextEdit()

        btn1.clicked.connect(self.doA)
        btn2.clicked.connect(self.doB)
        btn3.clicked.connect(self.doC)


        vbox = QVBoxLayout()
        vbox.addWidget(self.te)
        vbox.addWidget(btn1)
        vbox.addWidget(btn2)
        vbox.addWidget(btn3)

        self.setLayout(vbox)
        self.setWindowTitle('My First Application')
        self.move(300, 300)
        self.resize(400, 200)
        self.show()



    def doA(self):
        print("doA")
        text = self.te.toPlainText()
        f = open("memo.txt",'a')
        f.write(text)
        f.write("\n")
        f.close()

        
    def doB(self):
        print("doB")
        f = open("memo.txt",'r')
        memo = f.read()
        f.close()
        print(memo)


   
    def doC(self):
        f = open("memo.txt","r")
        memo = f.read()
        f.close()
        self.te.setText(memo)
        print("버튼3 누름")



        

if __name__ == '__main__':
   app = QApplication(sys.argv)
   ex = MyApp()
   sys.exit(app.exec_())