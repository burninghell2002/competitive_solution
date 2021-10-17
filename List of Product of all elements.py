# List of Product of all the Elements
def arrProd(arr, n):
    prod = 1
    for i in range(n):
        prod *= arr[i]
    for i in range(n):
        arr[i] = prod//arr[i]
    print(arr)


arr = [10, 3, 5, 6, 2]
n = len(arr)
arrProd(arr, n)
