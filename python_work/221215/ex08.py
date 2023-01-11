def doA():
    for i in range(5):
        yield i


for i in doA():
    print(i)
    print()

def square_nunbers(nums):
    for i in nums:
        yield i*i
my_nums = square_nunbers([1,2,3,4,5])
print(next(my_nums))
print(next(my_nums))
print(next(my_nums))
print(next(my_nums))
print(next(my_nums))
