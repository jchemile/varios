l = [2,14,23,7,32,39]

def bubbleSort(arr):
    #temp = 0
    for i in range(len(arr)):
        for j in range(len(arr)-1-i):
            print("i: ", i, " j: ", j)
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]

print(l)
bubbleSort(l)
print(l)
