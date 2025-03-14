# Write a program which finds out whether a given name is present in a list or not. 

names = ["Harry", "Shubham", "Sohan", "Sachin", "Rahul"]
name = input("Enter the name to check whether it is present in the list or not: ")

"""if(name == names[0] or name == names[1] or name == names[2] or name == names[3] or name == names[4]):
    print("Name is present in the list.")

else:
    print("Name is not present in the list.")"""

if(name in names):
    print("Name is present in the list.")

else:
    print("Name is not present in the list.")
