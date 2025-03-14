# Convert inches to centimeters
def converter():
    return inches * 2.54

inches = float(input("Enter the inches: "))
print(f"{inches} inches is equal to {converter()} centimeters")