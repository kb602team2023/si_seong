import itertools

a=["홍길동","이길동","박길동","윤길동","최길동"]
b=["사탕","고구마","초콜렛"]


for item in itertools.zip_longest(a,b):
    print(item)


for item in itertools.zip_longest(a,b,fillvalue="새우깡"):
    print(item)


c=list(itertools.zip_longest(a,b,fillvalue="공부"))
print(c)