# Write a program to find out whether a given post is talking about “Harry” or not.

post = input("Enter your post: ")

if ("harry" in post.lower()):   # This is a case-insensitive search for the word "Harry" in the post.
    print("Yes, the post is talking about Harry.")

else:
    print("No, the post is not talking about Harry.")