# Quiz) 아래 동작을 자동으로 수행하는 프로그램을 작성하시오

# 1. 그림판 실행 (단축키 : win + r, 입력값 : mspaint) 및 최대화

# 2. 상단의 텍스트 기능을 이용하여 흰 영역 아무 곳에다가 글자 입력
#  - 입력 글자 : "참 잘했어요"

# 3. 5초 대기 후 그림판 종료
#  이 때, 저장하지 않음을 자동으로 선택하여 프로그램이 완전 종료되도록 함
import pyautogui

pyautogui.hotkey('win','r')
pyautogui.keyDown('m')
pyautogui.keyDown('s')
pyautogui.keyDown('p')
pyautogui.keyDown('a')
pyautogui.keyDown('i')
pyautogui.keyDown('n')
pyautogui.keyDown('t')
pyautogui.hotkey('enter')


fw=pyautogui.getActiveWindow()
# fw.minimize()
pyautogui.sleep(1)
fw.maximize()

ch1=pyautogui.locateOnScreen('word.png')
pyautogui.click(ch1)

# pyautogui.sleep(1)
pyautogui.moveTo(400,300)
pyautogui.click()

import pyperclip
pyperclip.copy('참 잘했어요')
pyautogui.hotkey('ctrl','v')

pyautogui.move(30,30)
pyautogui.click()

pyautogui.sleep(5)


ch2=pyautogui.locateOnScreen('x.png')
pyautogui.click(ch2)

pyautogui.hotkey('n')
