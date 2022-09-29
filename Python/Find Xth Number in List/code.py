def getX(x, nums):
  nums.sort()
  print(nums)
  if x > len(nums) or x <= 0:
    return 0
  if nums == []:
    return 0
  return nums[x-1]
print(getX(4, [6, 3, -1, 5]))
