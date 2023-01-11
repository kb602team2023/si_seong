a=(1,2,3)
b=(4)

a=list(a)+[4]

a=tuple(a)
print(a)


a['name']='python'
a[('a')]='python'
# a[[1]]='python'->문제 리스트형은 딕셔너리 불가능
a[250]='python'