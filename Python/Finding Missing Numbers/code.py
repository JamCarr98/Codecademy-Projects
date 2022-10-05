def missing_nos(arr, k):
  # Write your code here
  missing = []

  if k != len(missing):
    if arr[0] != 1:
      for num in range(1, arr[0]):
        missing.append(num)
    for num in range(1, len(arr)):
      print(arr[num])
      if (arr[num] - arr[num - 1] != 1):
        missing.append(arr[num] - 1)
  return missing

print(missing_nos([2, 3, 4, 5, 6, 7, 8, 10], 2))

#finds missing numbers that should be in ascending order from 1
