import itertools
it = itertools.combinations(range(1, 46), 6)
# for num in it:
#     print(num)

c=len(list(itertools.combinations(range(1,46),6)))
print(c)