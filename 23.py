# Треугольник задан длинами сторон. Найти:
# а) длины высот;
# б) длины медиан;
# в) длины биссектрис;
# г) радиусы вписанной и описанной окружностей.

from math import *

a = int (input("Enter your first side: "))
b = int (input("Enter your second side: "))
c = int (input("Enter your third side: "))

p =  (a + b + c)/2          #perimetr

pp = (p-a)*(p-b)*(p-c)
znamenatel = 2 * sqrt( p * pp ) 

# ha = znamenatel / a         #Height a
# hb = znamenatel / b         #Height b
# hc = znamenatel / c         #Height c

# print("Height a = ", ha)
# print("Height b = ", hb)
# print("Height c = ", hc)

def getheight(num):
    height = znamenatel / num        
    return (height)
height_a = getheight(a)
height_b = getheight(b)
height_c = getheight(c)
print('Height a:', height_a,'height b:', height_b,'Heitht c:', height_c)


#Высоты__________________________________________________________________________________________________!


m = (2*a**2)+(2*b**2)

# m_a = 1/2*math.sqrt( m - a**2)
# m_b = 1/2*math.sqrt( m - b**2)
# m_c = 1/2*math.sqrt( m - c**2)

# print("a median is:", m_a)
# print("b median is:", m_b)
# print("c median is:", m_c)

def getmedian(num):
    median = 1/2*sqrt( m - num**2 )
    return (median)
median_a = getmedian(a)
median_b = getmedian(b)
median_c = getmedian(c)
print('Median a:', median_a, 'Median b:', median_b, 'Median c:', median_c)

# #Медианы__________________________________________________________________________________________________!


# l_a = 2 * math.sqrt( (a * b * p) * (p - a) ) / (c + b)
# l_b = 2 * math.sqrt( (a * b * p) * (p - b) ) / (a + c)
# l_c = 2 * math.sqrt( (a * b * p) * (p - c) ) / (a + b)

# print("a bisector is:", l_a)
# print("b bisector is:", l_b)
# print("c bisector is:", l_c)

def getbisector(a, b, c):
    l_a = 2 * sqrt( (a * b * p) * (p - a) ) / (b + c)
    l_b = 2 * sqrt( (a * b * p) * (p - b) ) / (a + c)
    l_c = 2 * sqrt( (a * b * p) * (p - c) ) / (a + b)
    return(l_a, l_b, l_c)
print (getbisector(a, b, c))
# # #Бисектрисы_________________________________________________________________________________________________!


# r = math.sqrt( (-a + b + c) * (a - b + c) * (a + b -c) ) / 4*(a + b + c)
# R = (a * b * c) / 4 * (math.sqrt(p * (p - a) * (p - b) * (p - c) ) )
# print("r is: ", r)
# print("R is: ", R)
# #R and r_________________________________________________________________________________________________!