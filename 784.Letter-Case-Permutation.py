from itertools import product

s = input()

opciones = []

for char in s:
    if char.isalpha():
        opciones.append([char.lower(), char.upper()])
    else:
        opciones.append(char)

r = product(*opciones)

print(list(r))
