def operar(v1,v2, fn):
    return fn(v1,v2)

resul1 = operar(10,5, lambda x1, x2: x1 + x2)
print(resul1)

resul2 = operar(10, 3, lambda x1, x2: x1 - x2)
print(resul2)

print(operar(30,10, lambda x1, x2: x1 * x2))

print(operar(10,5, lambda x1, x2: x1 / x2))