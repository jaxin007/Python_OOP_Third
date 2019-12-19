# Треугольник задан координатами своих вершин.
# Найти:
# а) периметр треугольника;
# б) площадь треугольника.

from math import*

x1 = int(input('Choose coordinate A x1: '))
y1 = int(input('Choose coordinate A y1: '))

x2 = int(input('Choose coordinate B x2: '))
y2 = int(input('Choose coordinate B y2: '))

x3 = int(input('Choose coordinate C x3: '))
y3 = int(input('Choose coordinate C y3: '))

a = sqrt( ( x2 - x1 ) * ( x2 - x1 ) + ( y2 - y1 ) * ( y2 - y1 ) )
b = sqrt( ( x3 - x2 ) * ( x3 - x2 ) + ( y3 - y2 ) * ( y3 - y2 ) )
c = sqrt( ( x3 - x1 ) * ( x3 - x1 ) + ( y3 - y1 ) * ( y3 - y1 ) )

p = a + b + c
s = ((x2 - x1)**2 + (y2 - y1)**2)**0.5
print('Perimeter is: ', p, '  S is: ', s)