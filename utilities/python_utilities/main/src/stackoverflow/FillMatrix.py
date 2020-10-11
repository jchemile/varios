values = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]


dim = 4
col = dim - 1
row = dim - 1
matriz = [None] * 4

while col >= 0 and row >= 0:
    matriz[row][col] = values.pop(0)

    row -= 1

    if row < 0:
        row = dim - 1
        col -= 1


for row in matriz:
    print(*row)
