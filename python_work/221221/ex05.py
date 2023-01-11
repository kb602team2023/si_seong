try:
    f=open('a.text','w')
    print(111)
    f.write('글자쓰기')
    print(222)
    f.close()
    print(333)

    4/0
    print(444)

    a=[1,2,3]
    a[4]=8

    print(555)
except FileNotFoundError as fnf:
    print(fnf)
except ZeroDivisionError as zde:
    print("0으로 나눌수 없습니다.")
except:
    print("에러 처리")
finally:
    f.close()
    print("무조건 마무리 하기.")
