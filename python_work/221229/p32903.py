'''
c언어 도전프로그램밍2 문제 3번 '''

list=()

for i in range(10):
    a=input(f"{i}번째 정수입력")
    b=int(a)
    if b&2==0:
        list.append(b)