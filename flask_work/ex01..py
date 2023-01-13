import random
a=[]
c=[]
for i in range(0,11):
    b=random.randint(0,10)
    print(b)
    if b%2==0:
        a.append([b])
        # print(f"a= ",a)
    elif b%2 !=0:
        c.append([b])
        # print(f"c= ",c)
    
print(f"a= ",a)
print(f"c= ",c)