def insertion_sort(arr):
    for i in range(1, len(arr)):
        j = i
        while arr[j] < arr[j - 1]:
            temp = arr[j]
            arr[j] = arr[j - 1]
            arr[j - 1] = temp
            j -= 1

arr = [3, 41, 52, 26, 38, 57, 9, 49, 34]

print(arr)
insertion_sort(arr)
print(arr)
