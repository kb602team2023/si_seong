a=[10,20,30,-40,-50,-60]
def posi(x):
    return x>0

print(list(filter(posi,a)))