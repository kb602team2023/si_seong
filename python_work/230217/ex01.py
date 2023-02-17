class Car:
    def __init__(self,name):
        self.name=name
        print('생성자 호출')

    def getDrive(self):
        print('getdrive')

    def __str__(self):
        print('tostring')
        return f'{self.name}=tostring'

car=Car("kk")
car.getDrive()
car.__str__()


a=[Car("현대"),Car("기아"),Car("르노")]
for car in a:
    print(car)