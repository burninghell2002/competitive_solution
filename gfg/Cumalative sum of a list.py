n = int(input("Enter the size of list : "))
print("\n")
list1 = list(map(float, input("Enter the list numbers separated by space ").strip().split()))[:n]
print("User List: ", list1)
list2=[]
j=0
for i in range(len(list1)):
    j+=list1[i]
    list2.append(j)

print(list2)