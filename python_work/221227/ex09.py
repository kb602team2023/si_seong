a={10,14,2,35,67}


import functools

result=functools.reduce(lambda total,item:total+item,a)
print(f"result={result}")