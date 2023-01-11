import time
a=int(input("10진수 숫자 입력하기"))

# result=[int(item)for item in ]
c=list()
while 1:
    time.sleep(1)
    b=int(a%2)
    c.append(b)
    
    a/2
    print("나머지:%d"%(a%2))
    
    print("몫:%d"%(a//2))
    a=a/2
    # print(int(a%2))
    # print("a:%d"%(a))
    if a//2 == 0:
        b=int(a%2)
        c.append(b)
        break
# d=c.reverse()
c.reverse()
print(c)
# c=set()
# c=tuple(str(int(b)))
# print(a)
# print(b)
# for i in int(b):
#     list(i)
# print("b:%d" %b)