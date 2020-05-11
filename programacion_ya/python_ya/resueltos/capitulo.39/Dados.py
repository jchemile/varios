import random

dado1 = random.randint(1,6)
dado2 = random.randint(1,6)
print("Dado 1 ", dado1)
print("Dado 2 ", dado2)

suma = dado1 + dado2

if suma == 7:
    print("gano")
else:
    print("perdio")