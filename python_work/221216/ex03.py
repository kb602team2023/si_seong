'''
가진돈 5000원
dvd는 1500원
크림빵 500원
새우깡 700원
콜라 400원

'''

for x in range(5):
    for y in range(4):
        for z in range(5):
            if (1900-(500*x+700*y+400*z))==0:
                print(f"x=크림빵{x+1}개 y=새우깡{y+1}개 z=콜라{z+1}개")
                # print(f"x={x+1} y={y+1} z={z+1}")
print("무엇을 고를래?")
text1=f"x=크림빵{x+1}개 y=새우깡{y+1}개 z=콜라{z+1}개\n 무엇을 고를래?"

f = open("result1.txt","a",encoding="UTF-8")
f.write(text1)
f. close()
