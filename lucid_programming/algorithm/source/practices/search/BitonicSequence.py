def find_highest_number(A):
    low = 0
    high = len(A) - 1

    if len(A) < 3:
        return None

    while low <= high:
        mid = (low + high) // 2

        mid_left  = A[mid - 1] if mid - 1 > 0 else float("-inf")
        mid_right = A[mid + 1] if mid + 1 < len(A) else float("inf")


        if mid_left < A[mid] and mid_right > A[mid]:
            low = mid + 1
        elif mid_left > A[mid] and mid_right < A[mid]:
            high = mid - 1

        elif mid_left < A[mid] and mid_right < A[mid]:
            return A[mid]

A = [1, 2, 3, 4, 5, 4, 3, 2, 1]
B = [1, 2, 3, 4, 1]
C = [1, 6, 5, 4, 3, 2, 1]

print(find_highest_number(A))
print(find_highest_number(B))
print(find_highest_number(C))