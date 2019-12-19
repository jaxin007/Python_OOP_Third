import math
num = int (input("Введите первое число: "))
num_2 = int (input("Введите второе число: "))
arifmetic = ( num + num_2 ) / 2 #Средее арифметическое
print ("Среднее аримфетическое", arifmetic)
geometric = math.sqrt (abs(num) * abs(num_2)) #Среднее геометрическое чисел с модулем
print ("Среднее геометрическое модулей двух чисел", geometric)