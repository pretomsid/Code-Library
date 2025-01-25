# Can you change the values inside a list which is contained in set S? 
# s = {8, 7, 12, "Harry", [1,2]} 
# No, we can't change the values inside a list which is contained in set S.
# TypeError: unhashable type: 'list'
# print(s)

s = {8, 7, 12, "Harry", (1,2)}
s.add((1,2,3))
print(s)
# Tupples are immutable so we can add tupples in set S.