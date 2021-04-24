from typing import List

def evennumbers(nums: List[int]) -> int:
    sum = 0
    for i in range(len(nums)): 
        snums = str(nums[i])
        if (len(snums) % 2 == 0):
            sum += 1
    return sum

x = [5, 20, 1245, 0, 1000]
print(evennumbers(x))
y = 23
x.append(y)
print(evennumbers(x))