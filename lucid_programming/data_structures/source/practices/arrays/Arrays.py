#ARRAY 1: Array Advance

def array_advance(A):
    furthest_reached = 0
    last_idx = len(A) - 1
    i = 0
    while i <= furthest_reached and furthest_reached < last_idx:
        furthest_reached = max(furthest_reached, A[i] + i)
        i+=1
    return furthest_reached >= last_idx

A1 = [3,3,1,0,2,0,1]
A2 = [3,2,0,0,2,0,1]

print(array_advance(A1))
print(array_advance(A2))

#ARRAY 2: Arbitrary Precision Increment

def plus_one(A):
    A[-1] += 1
    for i in reversed(range(1,len(A))):
        if A[i] != 10:
            break
        A[i] = 0
        A[i-1] +=1
    if A[0] == 10:
        A[0] = 1
        A.append(0)
    return A

A1 = [1,4,9]
A2 = [9,9,9]

print(plus_one(A1))
print(plus_one(A2))

#ARRAY 3 - Two Sum Problem
#Given a sorted array of integers. Return the two numbers such that
#they add up to a specific target. You may assume that each input
#would have exactly one solution, and you may not use the same element twice

A = [-2,1,2,4,7,11]
target = 13

#Force approach -
#Time Complexity: O(n^2)
#Space Complexity: O(1)
def two_sum_brute_force(A, target):
    for i in range(len(A)-1):
        for j in range(i+1, len(A)):
            if A[i] + A[j] == target:
                print(A[i], " " ,A[j])
                return True;
    return False

print(two_sum_brute_force(A,target))

print(two_sum_brute_force(A,20))

A = [2,4,6]
target = 10

#Time Complexity: On
#Space Complexity: On
def two_sum_hash_table(A, target):
    ht = dict()
    for i in range(len(A)):
        if A[i] in ht:
            print(ht[A[i]], A[i])
            return True
        else:
            ht[target - A[i]] = A[i]
    return False

print(two_sum_hash_table(A, target))

#Time Complexity: O(n)
#Space Complexity: O(1)
def two_sum(A, target):
    i = 0
    j = len(A) - 1

    while i <= j:
        if A[i] + A[j] == target:
            print(A[i], A[j])
            return True
        elif A[i] + A[j] < target:
            i += 1
        else: #A[i] + A[j] < target
            j -= 1
    return False

print(two_sum(A,target))