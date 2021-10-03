s = input()
hole=0
for i in s:
    if (i in ["A","D","O","P","R"]):
        hole+= 1
    elif(i in ["B"]):
        hole= hole+2
print(hole)