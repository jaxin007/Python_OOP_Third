# Найти площадь равнобочной трапеции с основаниями а и Ь и углом а при большем основании а.

import math
a = int (input("a = "))
b = int (input("b = "))
c = int (input("c = "))
alpha = int (input("alpha = "))

c2 = pow(c, 2)          # C^2

ab2 = (a-b)**2          # (a-b)^2

s1 = (( a + b ) / 2)
s2 = math.sqrt(c2 - ( ab2 /  4) )
s = s1 * s2

if(a>b):
    print("WTF!?")
else:
    print("S = ", s)