import pyautogui

size=pyautogui.size()

print(size)

# 절대좌표 기준을 이동
pyautogui.moveTo(200,100,duration=1)
# 상대좌표 기준을 이동
pyautogui.move(100,100,duration=1)
# 클릭하기
pyautogui.click()
# 해당좌표 출력
print(pyautogui.position())