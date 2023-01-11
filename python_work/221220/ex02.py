from ccalcu import CCalculator

cal1=CCalculator(10,20)
# cal1.setDate(10,20)


print(cal1.first)
print(cal1.secound)

print(cal1.add())
print(cal1.sub())
print(cal1.mul())
print(cal1.div())
print()

cal1.setDate(30,40)
print(cal1.mul())
print('\n')
cal1.setDate(45,6)
print(cal1.mod())
cal1.setDate(30,0)
print(cal1.div())



cal1=None