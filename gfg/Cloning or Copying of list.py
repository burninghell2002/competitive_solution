def cloning(list1):
    li_copy= list1[:]
    return li_copy

n = int(input("Enter the size of list : "))
print("\n")
list1 = list(map(float, input("Enter the list numbers separated by space ").strip().split()))[:n]
print("User List: ", list1)
list2 = cloning(list1)
print("Clonned list: ",list2)