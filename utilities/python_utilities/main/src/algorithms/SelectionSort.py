l = [2,23,14,11,32,39,7]

print(l)

def selectionSort(arr):
    for i in range(len(arr)):
        cur_max=0
        for j in range(1, len(arr)-i):
            if arr[cur_max]< arr[j]:
                cur_max = j
            arr[len(arr)-i-1], arr[cur_max] = arr[cur_max], arr[len(arr)- i -1]

selectionSort(l)
print(l)