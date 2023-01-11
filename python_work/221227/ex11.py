from student import students

s1 = students("홍길동",11,3)
s2 = students("이길동",12,4)
s3 = students("박길동",17,9)
s4 = students("유길동",15,7)

list1=[s1,s2,s3,s4]

from operator import attrgetter

alist = sorted(list1,key=attrgetter('age'))
for item in alist:
    print(item)