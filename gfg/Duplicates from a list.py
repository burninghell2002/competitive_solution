from collections import Counter

n = int(input("Enter the size of list : "))
print("\n")
list1 = list(map(float, input("Enter the list numbers separated by space ").strip().split()))[:n]
print("User List: ", list1)

d= Counter(list1)
print(d)