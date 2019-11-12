# Вычислить расстояние между двумя точками с координатами 
import math
x1 = int(input('Choose x1: '))
x2 = int(input('Choose x2: '))
y1 = int(input('Choose y1: '))
y2 = int(input('Choose y2: '))


d = math.sqrt( ( (x2 - x1)**2) + ( (y2 - y1)**2) )
print('range d = ', d)