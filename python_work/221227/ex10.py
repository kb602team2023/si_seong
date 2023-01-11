from operator import itemgetter

student=[('홍길동',11,"사과"),("이길동",22,"딸기"),("최길동",17,"수박")]


student= sorted(student,key=itemgetter(0))
print(student)