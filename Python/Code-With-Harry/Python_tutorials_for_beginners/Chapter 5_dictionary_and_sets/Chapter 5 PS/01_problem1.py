"""Write a program to create a dictionary of Hindi words with values as their English 
translation. Provide user with an option to look it up!"""
words = {
    "Adu" : "CutuuBilly",
    "Pankha" : "Fan",
    "Dabba" : "Box",
    "Vastu" : "Item",
    "Kamra" : "Room",
    "Kitab" : "Book",
    "Kursi" : "Chair",
    "Tabela" : "Table",
    "Bistar" : "Bed",
    "Chadar" : "Blanket",
    "Pillow" : "Pillow",
}

word = input("Enter the Hindi word: ")
print(words[word])


# print(f"The English translation of the Hindi word {word} is {words[word]}")
 