# Rearrange Positive and Negative Values
def moveAll(arr, low, high):
    while low <= high:
        if arr[low] > 0 and arr[high] < 0:
            arr[low], arr[high] = arr[high], arr[low]
            low += 1
            high -= 1
        elif arr[low] > 0 and arr[high] > 0:
            high -= 1
        elif arr[low] < 0 and arr[high] < 0:
            low += 1
        else:
            low += 1
            high -= 1
    print(arr)


arr = [-12, 11, -13, -5, 6, -7, 5, -3, 11]
moveAll(arr, 0, len(arr)-1)
