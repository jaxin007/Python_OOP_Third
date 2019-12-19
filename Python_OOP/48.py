from math import *
a, b, c = int(input('Choose a: ')), int(input('Choose b: ')), int(input('Choose c: '))
if a == 0:
    print('Equation doesn`t exist')
else:
    if a == 1:
        print('а = 1. Vieta')
        x_1 = -(b / a)
        x_2 = c / a
        print('First root: ', x_1, '\nSecond root: ', x_2)
    else:
        D = (b**2) - (4 * a * c)
        if D > 0:
            d = sqrt(D)
            print('Equation have 2 roots.')
            x_1 = (-b + d) / (2 * a)
            x_2 = (-b - d) / (2 * a)
            print('First root is: ', x_2, 'Second root is: ', x_2)
        elif D == 0:
            x = (-b) / (2 * a)
            print('Equation have 1 root: ', x)
        else:
            print('Equetion doesn`t exist')
