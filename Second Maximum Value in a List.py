# Find Second Maximum Value in a List

# Optimal Approach
# Time - O(n)
# Space - O(1)

def largest(arr, n):
    lar_1 = lar_2 = -2147483648
    if n < 2:
        return "Error!"
    for i in range(len(arr)):
        if arr[i] > lar_1:
            lar_2 = lar_1
            lar_1 = arr[i]
        elif arr[i] > lar_2 and arr[i] < lar_1:
            lar_2 = arr[i]
    return lar_2


arr = [12, 35, 1, 10, 34, 1]
print(largest(arr, len(arr)-1))
