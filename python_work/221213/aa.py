class AA:

    def __init__(self):
        print("클래스 생성시 호출")
        self.doA()

    def doA(self):
        print("DoA")

a = AA()
