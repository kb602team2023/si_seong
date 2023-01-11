import sys

option = sys.argv[1]
memo = sys.argv[2]

if option =='-a':
    print("option is a")
    f = open("memo1.txt",'a')
    f.write(memo)
    f.write("\n")
    f.close()

else:
    f = open("memo1.txt",'r')
    memo = f.read()
    f.close()
    print(memo)


