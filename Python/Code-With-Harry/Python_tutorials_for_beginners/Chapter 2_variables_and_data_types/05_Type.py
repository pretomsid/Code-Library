a = 23
t = type(a)
print(t)
b = False
t = type(b)
print(t)
c = 23.22
t = type(c)
print(t)
d = "1232"
t = type(d)
print(t)
e = None
t = type(e)
print(t)
# Output:
# <class 'int'>
# <class 'bool'>
# <class 'float'>
# <class 'str'>
# <class 'NoneType'>

a = "23"
b = float(a) 
c = type(float(a))   
print(b,c)