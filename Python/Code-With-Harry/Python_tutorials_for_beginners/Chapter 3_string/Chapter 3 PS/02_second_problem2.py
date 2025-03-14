# Write a program to fill in a letter template given below with name and date.
letter = '''  
Dear <|Name|>, 
You are selected! 
<|Date|> 
'''

print(letter)

print(letter.replace("<|Name|>","Sid").replace("<|Date|>","12th August,2025\n"))
print(letter.replace("<|Date|>","12th August,2025").replace("<|Name|>","Sid"))
