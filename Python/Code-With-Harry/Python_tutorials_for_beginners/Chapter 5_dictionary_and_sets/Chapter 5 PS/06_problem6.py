"""Create an emptdictionary. Allow 4 friends to enter their favorite language : as 
value and use key as their names. Assume that the names are unique. """

d = {}

lang = input("Enter favourite language: ")
name = input("Enter the name: ")
d.update({name:lang})

lang = input("Enter favourite language: ")
name = input("Enter the name: ")
d.update({name:lang})

lang = input("Enter favourite language: ")
name = input("Enter the name: ")
d.update({name:lang})

lang = input("Enter favourite language :")
name = input("Enter the name: ")
d.update({name:lang})

print(d)