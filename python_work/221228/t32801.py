'''
c언어 책 도전 프로그램밍 파트2의 1번 문제
'''
list=[]
hol=[]
jjack=[]
for i in range(10):
    st=input(f"{i}번째 입력")
    intst=int(st)
    list.append(intst)
    # if intst%2 ==0:
    #     jjack.append(intst)
    # else:
    #     hol.append(intst)

print(list)
# print(f"홀수 {hol}")
# print(f"짝수 {jjack}")

holsu=[int(item)for item in list if int(item)%2==1]
print(f"홀수 {holsu}")
jjacksu=[int(item)for item in list if int(item)%2==0]
print(f"짝수 {jjacksu}")
