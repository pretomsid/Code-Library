# Write a program to find whether a given number is prime or not. 

n = int(input("Enter the number: "))

for i in range(2, n):
    if (n % i) == 0:
        print("This is not a prime number")
        break
else:
    print("This is a prime number")