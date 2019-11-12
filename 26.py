# Найти площадь сектора, радиус которого равен 13.7, а дуга содержит заданное число радиан р
from math import *
r = 13.7
p = float(input('Choose number of radian p: '))
d = (p * 180) / pi      #convert radians to degree

s = (pi * r**2 * d) / 360
print ('S is: ', s)