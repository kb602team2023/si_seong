'''
input 과 eval을 사용하여 함수 프로그램
'''

def inputEval():
    myinput=input("식을 입력하세요\n")
    print(eval(myinput))

if __name__ =='__main__':
    inputEval()

