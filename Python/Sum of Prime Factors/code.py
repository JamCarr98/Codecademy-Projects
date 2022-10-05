def sum_of_prime_factors(n):
  # Write your code here
  total = 0

  for i in range(2, n+1): 
    prime = True
    if n % i == 0:
      for num in range(2, i): 
        if i % num == 0: 
          prime = False
      if prime == True:
        total += i 
  return total

print(sum_of_prime_factors(6))
