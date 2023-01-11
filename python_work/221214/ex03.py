'''
입력받은 숫자에 대해 구구단을 출력하자 
계속 반복되도록 출력
'''

info ='''
1. 구구단 몇단 출력할래?
종료하시려면 음수를 입력하세요.
'''

while True:
    print(info)
    gugudan = input()
    gugudan =int(gugudan)
    if int(gugudan) < 0:
        print("종료")
        break
    
    elif gugudan==0:
        print("0단은 보여줄수 없습니다")

    else:
        a = 1
        while(a<15):
            print(f"{gugudan} * {a} = {gugudan*a}")
            a = a+1