import time

file1 = open("result.txt","r",encoding="UTF-8")

while True:
    line = file1.readline
    print(line)
    if not line: break
    # time.sleep(1)

file1.close()


