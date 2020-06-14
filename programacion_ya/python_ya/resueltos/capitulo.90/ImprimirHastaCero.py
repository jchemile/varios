def hastaCero(x):
    if x > 0:
        print(x)
        hastaCero(x-1)

hastaCero(10)