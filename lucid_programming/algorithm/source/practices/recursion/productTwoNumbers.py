
x = 5
y = 3

x1 = 500
y1 = 2000


def recursive_multiply(x, y):

    if x < y:
        return recursive_multiply(y, x)

    if y == 0:
        return 0
    return x + recursive_multiply(x, y-1)


print(x * y)
print(recursive_multiply(x, y))

print(x1 * y1)
print(recursive_multiply(x1, y1))