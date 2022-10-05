def fib_finder(n):
  if n == 1 or n == 2:
    return n -1
  first = 0
  second = 1
  for count in range(3, n+1, 1):
    temp = first + second
    first = second
    second = temp
  return second
print(fib_finder(6))
