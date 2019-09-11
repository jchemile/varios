def find_fixed_point_linear(A):
    for i in range(len(A)):
        if A[i] == i:
            return A[i]
    return None


def find_fixed_point(A):
    low = 0
    high = len(A) -1

    while low <= high:
        mid = (low + high) // 2

        if A[mid] < mid:
            low = mid + 1
        elif A[mid] > mid:
            high = mid - 1
        else:
            return A[mid]
    return None

A = [-10, -5, 0, 3, 7]
B = [0, 2, 5, 8, 17]
C = [-10, -5, 3, 4, 7, 9]


print(find_fixed_point_linear(A))
print(find_fixed_point(A))

print(find_fixed_point_linear(B))
print(find_fixed_point(B))

print(find_fixed_point_linear(C))
print(find_fixed_point(C))
