"""Write a program to accept marks om 6 students and display them in a sorted 
manner."""
marks = []
m1 = int(input("Enter the mark 1: "))
marks.append(m1)
m2 = int(input("Enter the mark 2: "))
marks.append(m2)
m3 = int(input("Enter the mark 3: "))
marks.append(m3)
m4 = int(input("Enter the mark 4: "))
marks.append(m4)
m5 = int(input("Enter the mark 5: "))
marks.append(m5)
m6 = int(input("Enter the mark 6: "))
marks.append(m6)

marks.sort()
print(marks)