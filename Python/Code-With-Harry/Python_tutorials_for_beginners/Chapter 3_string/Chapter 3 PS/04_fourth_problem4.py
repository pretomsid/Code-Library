# Replace the double space from problem 3 with single spaces. 
name = "Sid is a good boy"
print(name.replace("  "," "))
print(name.replace("good"," bad"))
print(name) #No change in output because strings are immutable.

print(print(name.replace("good"," bad"))) #None is printed because print() returns None.
print(print("hello")) #hello is printed and None is printed because print() returns None.
