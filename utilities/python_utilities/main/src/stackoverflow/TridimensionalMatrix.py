import pprint

cantidad1 = 5
cantidad2 = 3
cantidad3 = 4

matriz_3d = [[[0 for i in range(cantidad1)] for j in range(cantidad2)] for k in range(cantidad3)]

pprint.pprint(matriz_3d)

print("************")

print(matriz_3d)

print("************")

for k in matriz_3d:
    for j in k:
        for i in range(len(j)):
            j[i] = i
pprint.pprint(matriz_3d)

