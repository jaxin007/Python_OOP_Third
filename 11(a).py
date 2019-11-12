# Даны х у z. Вычислить а b. Задание a.
import math
x = int (input("Введите x: "))
y = int (input("Введите y: "))
z = int (input("Введите z: "))
a = ( (math.sqrt (abs(x-1) )) - pow(abs(y),1/3) ) / ( 1 + (x**2/2) + (y**4/4) )
print ("a = ", a)
b = x*( math.atan(z)) + pow(math.e,-(x+3) )
print ("b = ", b)