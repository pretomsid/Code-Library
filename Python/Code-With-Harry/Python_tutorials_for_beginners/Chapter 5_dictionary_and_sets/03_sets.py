"""
1. Sets are unordered => Element’s order doesn’t matter 
2. Sets are unindexed => Cannot access elements by index 
3. There is no way to change items in sets. 
4. Sets cannot contain duplicate values."""

s = {1,5,12, 5 , 5 , 54}

e = set() # Empty set. Don't use e={} to create an empty set. It will create an empty dictionary.
print(e, type(e))
print(s)

# Sets are unordered collections of unique elements. 
# If you want ordered sets, use list.