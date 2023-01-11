
import sys
from PyQt5. QtWidgets import QApplication, QWidget, QPushButton, QVBoxLayout


class MyApp(QWidget):

    def __init__(self):
        super().__init__()
        self.initUI()

    def initUI(self):
        btn1 = QPushButton("버튼1",self)
        btn2 = QPushButton("버튼2",self)
        btn3 = QPushButton("버튼3",self)

        btn1.clicked.connect(self.doA)
        btn2.clicked.connect(self.doB)
        btn3.clicked.connect(self.doC)

        vbox = QVBoxLayout()
        vbox.addWidget(btn1)
        vbox.addWidget(btn2)
        vbox.addWidget(btn3)

        self.setLayout(vbox)
        self.setWindowTitle('My First Application')
        self.move(300, 300)
        self.resize(400, 200)
        self.show()

    def doA(self):
        print("1번 완료")
        f = open("memo1.txt",'a')
        f.write("1번 성공")
        f.write("\n")
        f.close()
    

    def doB(self):
        print("2번 완료")
        f = open("memo1.txt",'a')
        f.write("2번 성공")
        f.write("\n")
        f.close()
        

    def doC(self):
        print("3번완료")
        f = open("memo1.txt",'r')
        memo = f.read()
        f.close()
        print(memo)


if __name__ == '__main__':
   app = QApplication(sys.argv)
   ex = MyApp()
   sys.exit(app.exec_())