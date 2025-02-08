"""Write a program to find whether a given username contains less than 10 
characters or not."""

username = input("Enter your username: ")

if(len(username)<10):
    print("Username contains less than 10 characters.",True)

else:
    print("Username contains 10 or more characters.",False)