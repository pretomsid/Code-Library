# Write a program to find the greatest of four numbers entered by the user.

a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))
c = int(input("Enter the third number: "))
d = int(input("Enter the fourth number: "))
if(a>b and a>c and a>d):
    print("The greatest number is", a)

elif(b>a and b>c and b>d):
    print("The greatest number is", b)

elif(c>a and c>b and c>d):
    print("The greatest number is", c)

else:
    print("The greatest number is", d)
    