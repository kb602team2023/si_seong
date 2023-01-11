num1=input("정수입력")
num2=input("정수입력")

print(num1)
print(num2)

# print(type(eval(num1)))
# print(type(eval(num2)))

num1 = eval(num1)
num2 = eval(num2)

sma = num2 if num1>num2 else num1
big = num2 if num1<num2 else num1
gcm =1

for i in range(1,sma+1):
    if sma % i ==0 and big%1==0:
        gcm = i

text = f"최대 공약수는 {gcm}입니다\n"

print(text)

file1 = open("result.txt","a",encoding="UTF-8")
file1.write(text)
file1.close()
