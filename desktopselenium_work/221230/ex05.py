import pyautogui

result=pyautogui.confirm("yes or no")
print(result)

password=pyautogui.password("암호 입력하세요")
print(password)

inputvalue=pyautogui.prompt("무엇을 입력해라")
print(inputvalue)
