# Check that a tuple type cannot be changed in python.
s = (1,'a',3.4)
s[1] = 'b'
print(type(s))