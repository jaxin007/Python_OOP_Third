from math import*
h = int(input('Choose h: '))
if h < 0:
    print('Error')
else:
    numerator_a = abs( sin(8 * h) ) + 17
    denumerator_a = ( 1 - sin(4 * h) * cos(h**2 + 18) )**2
    a = sqrt(numerator_a / denumerator_a)
    print('a = ', a)

    numerator_b = 3
    denumerator_b = 3 + abs(tan(a * h**2) - sin(a * h))
    b = 1 - (numerator_b / denumerator_b)
    print('b = ', b)

    c = a * h**2 * sin(b * h) + b * h**3 * cos(a * h)
    print('c = ', c)
