class MyError(Exception):
    def __str__(self):
        return "바보닉네임은 사용할수 없습니다."

def saynick(nick):
    if nick =='바보':
        raise MyError
    else:
        print(f"{nick}닉네임이 설정되었습니다.")

saynick('천사')
try:
    saynick('바보')
except MyError as e:
    print(e)


