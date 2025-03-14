"""A spam comment is defined as a text containing following keywords: 
“Make a lot of money”, “buy now”, “subscribe this”, “click this”. Write a program 
to detect these spams."""

comment = input("Enter your comment: ")

if(comment == "Make a lot of money" or comment == "buy now" or comment == "subscribe this" or comment == "click this"):
    print("This comment is a spam comment.")
else:
    print("This comment is not a spam comment.")
