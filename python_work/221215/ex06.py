def add_mul(aaa,*ccc):
    if aaa=="add":
        result = 0
        for item in ccc:
            result=result+item
    elif aaa == "mul":
        result = 1
        for item in ccc:
            result=result*item

    return result
c=add_mul('add',1,2,3,4,5)
print(c)
c=add_mul("mul",1,2,3,4,5)
print(c)
