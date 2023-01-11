import itertools
import time
import time
import shutil
import random

a=[x for x in zip(range(10),range(20,30))]
print(a)
print()
time.sleep(5)
b=[random.randint(0,x) for x in range(50,100)]
print(b)
print()
time.sleep(5)
c=[x for x in itertools.zip_longest(range(10,30),[],fillvalue="55")]
print(c)
print()
time.sleep(5)

print(time.strftime(time.localtime(time.time())))

shutil.move("memo.txt","221228/memo.txt")