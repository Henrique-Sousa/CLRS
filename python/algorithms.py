def insertion_sort(arr):
    new_arr = arr.copy()
    for i in range(1, len(new_arr)):
        j = i
        while new_arr[j] < new_arr[j - 1]:
            temp = new_arr[j]
            new_arr[j] = new_arr[j - 1]
            new_arr[j - 1] = temp
            j -= 1
    return new_arr
