a=[1,5,4,6,7,3,2,9]

b=["a","eee","ssss","bb","fff","dddddd"]

print(sorted(a))
print(sorted(b))
print(sorted(b,key=lambda x:len(x)))