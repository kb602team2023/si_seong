a=[1,2,3,-4,-5,-6]

# print(a)
def posi(l):
    result=[]
    for i in l:
        if i>0:
            result.append(i)
    return result

print(posi(a))