def prime_finder(n):
  # Write your code here
  numList = [] #Creates a list to store the prime numbers
  #For loop that runs from the number 2 because 1 isn't a prime number
  for i in range(2, n+1): 
    prime = False #Variable to check if i is a prime
    for num in range(2, i): # Second for loop to check against the first
      if i % num == 0: # If the number is divisible by any other number prime is set to true
        prime = True
    if prime == False:
      numList.append(i) # Prime number is appended to list
  return numList

print(prime_finder(11))
