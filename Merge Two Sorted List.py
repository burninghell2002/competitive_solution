# Merge two Sorted List
def merge(arr1, arr2, n, m):
    i = 0
    j = 0
    temp = [0]*(n+m)
    k = 0
    while i < n and j < m:
        if arr1[i] < arr2[j]:
            temp[k] = arr1[i]
            i += 1
        else:
            temp[k] = arr2[j]
            j += 1
        k += 1

    while i < n:
        temp[k] = arr1[i]
        i += 1
        k += 1

    while j < m:
        temp[k] = arr2[j]
        j += 1
        k += 1
    return temp


arr1 = [1, 3, 5, 7]
arr2 = [0, 2, 6, 8, 9]
print(merge(arr1, arr2, len(arr1), len(arr2)))
