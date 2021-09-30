def divide_chunks(l,N):
    for i in range(0,len(l),N):
        yield l[i:i+N]

n = int(input("Enter the size of list : "))
print("\n")
list1 = list(map(float, input("Enter the list numbers separated by space ").strip().split()))[:n]
print("User List: ", list1)
N=int(input("Enter The size"))

x= list(divide_chunks(list1,N))
print(x)