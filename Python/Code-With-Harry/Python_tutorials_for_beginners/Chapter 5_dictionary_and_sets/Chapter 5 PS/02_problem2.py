"""Write a program to input eight numbers from the user and display all the unique 
numbers (once)."""
s = set()

number = input("Enter the number: ")
s.add(int(number))
number = input("Enter the number: ")
s.add(int(number))
number = input("Enter the number: ")
s.add(int(number))
number = input("Enter the number: ")
s.add(int(number))
number = input("Enter the number: ")
s.add(int(number))
number = input("Enter the number: ")
s.add(int(number))
number = input("Enter the number: ")
s.add(int(number))
number = input("Enter the number: ")
s.add(int(number))

print(s)