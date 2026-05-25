from itertools import product
from itertools import combinations

n = 4
k = 2

opciones = []

for i in range(1, n+1):
    opciones.append(i)

for j in combinations(opciones, k):
    print(list(j))

# for char in s:
#     if char.isalpha():
#         opciones.append([char.lower(), char.upper()])
#     else:
#         opciones.append(char)

