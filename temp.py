import random

def poly_alea():
    p = []
    for i in range(219):
        p.append(random.randint())
    return p
print("(",end = "")
for i in range(73):
    p = poly_alea()
    print("(",end = "")
    for i in p:
        print("{i},", end = "")
    print("),")
print(")")
