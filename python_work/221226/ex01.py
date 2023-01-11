class A:
    pass
class B:
    pass
a=A()
b=B()

print('a.isinstance(A)',isinstance(a,A))
print('a.isinstance(B)',isinstance(b,A))

print('b.isinstance(A)',isinstance(a,B))
print('b.isinstance(B)',isinstance(b,B))


if isinstance(a,A):
    print("a는 A입니다")

if isinstance(b,B):
    print("b는 B입니다")


