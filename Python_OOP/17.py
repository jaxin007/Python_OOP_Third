#Найти площадь кольца, внутренний радиус которого равен 20, а внешний—заданному числу г (г > 20).
import math
r = 20
R = float(input ("Введите внешний радиус: ") )
if R > 20:
    s = math.pi * ( (R**2) - (r**2) )
    print ("Площадь кольца:", s)
else:
    print ('Ваше число меньше чем 20 ')
