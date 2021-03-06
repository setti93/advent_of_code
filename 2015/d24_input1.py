import itertools
import operator

nums = []

with open('d24_input1.txt') as f:
    for line in f:
        nums.append(int(line.strip("\n")))
parts = 4
tot = sum(nums)/parts

def hasSum(lst, sub):
    for y in range(1,len(lst)):
        for x in itertools.combinations(lst, y):
            if sum(x) == tot and sub == 2:
                return True
            elif sum(x) == tot and sub < parts:
                return hasSum(list(set(lst) - set(x)), sub - 1)
            elif sum(x) == tot and hasSum(list(set(lst) - set(x)), sub - 1) :
                return reduce(operator.mul, x, 1)
print hasSum(nums, parts)
