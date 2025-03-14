marks = {
    "Sid" : 100,
    "Rohan" : 200,
    "Shubham" : 300,
    "Harry" : "25",
    "Key" : "Value",
    "list" : [1, 2, 3, 4, 5],
    0: "Nigga"
}

print(marks.items(),"\n")
print(marks.keys(),"\n")
print(marks.values())
print(marks.update({"Sid":99, "Maike" : 420}))
print(marks)
print(marks.get("Sid"),marks.get("Rohan"),marks.get("Rohani"))
print(marks.get("Harry2")) #prints None
# print(marks["Harry2"]) #Returns an error