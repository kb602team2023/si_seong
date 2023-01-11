import pyautogui

img = pyautogui.screenshot()
img.save('a.png')

# img = pyautogui.screenshot()
# img.save("screenshot.png") # 파일로 저장

pi=pyautogui.pixel(10,10)
print(pi)

print(pyautogui.pixelMatchesColor(10,10,(60,60,60)))