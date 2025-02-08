a = int(input("Enter your age: "))

#multiple else statement

if(a%2==0):                     #independent if statement
    print("The number is even")

if(a>18):
    print("You can drive a car")

elif(a<=0):
    print("You are not born yet")

else:
    print("You cannot drive a car")  
      
print("Thanks for using this code!")