# Даны действительные числа х, у . Не пользуясь никакими операциями, кроме умножения, сложения и вычитания, вычислить 3х^2у^2 — 2ху^2 — 7х^2у — 4у^2 + 15ху + 2х^2 — Зх + 10y + 6.

x = float(input('Choose your x: '))
y = float(input('Choose your y: '))


a = (3 * (x * x) ) * (y * y)
b = (2 * x) * (y * y)
c = (7 * (x * x) ) * y
d = (4 * (y * y) )
e = (15 * x * y)
f = (2 * (x * x))
g = (-(3 * x)) + (10 * y) + 6

result = a - b - c - d + e + f + g
print('\nYour result is: ', result)