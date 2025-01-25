s = {100,5,12, 5 , 5 , 54, "Sid"}
 
print(s, type(s))
print(len(s)) # This will return the length of the set.
s.add(70) # This will add the element to the set.
print(s, type(s))
# s.remove(500)# This will throw an error if the element is not present in the set.
# print(s)
s.remove(70) # This will remove the element from the set.
print(s)

print(s.pop()) # This will remove an arbitrary element from the set and return it.

# Shift + Alt + Down/Up Arrow to copy the current line to the next/previous line.

s.clear() # This will clear the set.
print(s)