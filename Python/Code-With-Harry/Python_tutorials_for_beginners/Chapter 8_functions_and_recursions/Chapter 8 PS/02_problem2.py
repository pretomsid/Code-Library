# Write a python program using function to convert Celsius to Farhenheit.

def converter():
    F = (C*9/5)+32
    return F 

C = int(input("Enter the temperature in Celsius: "))

print(round(converter(),2))