# 1. Arithmetic operators: +, -, *, / etc.
a = 4
b = 3
c = a + b # Addition operator
print(c)
c = a - b # Subtraction operator
print(c)
c = a * b # Multiplication operator
print(c)
c = a / b # Division operator
print(c)
c = a % b # Modulus operator
print(c)
c = a ** b # a raised to the power b
print(c)
c = a // b # Floor division
print(c)

# 2. Assignment operators:  =, +=, -= etc. 
a = 4-5 # Assign 4-5 to a
print(a)
b=6
b += 7 # Increment the value of b by 7
print(b)
b -= 7 # Decrement the value of b by 7
print(b)
b *= 7 # Multiply the value of b by 7
print(b)
b /= 7 # Divide the value of b by 7
print(b)

# 3. Comparison operators: ==, >, >=, <, != etc. 
#return value always be a boolean value

d = 5.23>4
print(d)
d = 5.23<4
print(d)
d = 5.23>=4
print(d)
d = 5.23<=4
print(d)
d = 5.23==4
print(d)
d = 5.23!=4
print(d)
d = 5.23!=5.23
print(d)
d = 5.23==5.23
print(d)

# 4. Logical operators: and, or, not. 

e = True and False
print(e)
e = True or False
print(e)
e = not True
print(e)
e = not False
print(e)
e = not True and False
print(e)
e = not True or False
print(e)
e = not True or not False
print(e)
e = not True and not False
print(e)
e = not True and not False or True
print(e)
e = not True and not False and True
print(e)
e = not True or not False or True
print(e)

print(not(True))
print(not(False))