# Даны действительные числа х, у . Получить;
# а) max(х, у)
# б) min (x, у)
# в) max(х, у), min(х, у)

x = int(input('Choose x: '))
y = int(input('Choose y: '))

def printMax():
    print('Now we find Max number')
    if x > y:
        print('Max number is x: ', x)
    else:
        print('Max number is y: ', y)


def printMin():
    print('Now we find Min number')
    if x < y:
        print('Min number is x: ', x)
    else:
        print('Min number is y: ', y)


def printMax_Min():
    print('Now we find Max and Min number')
    if x > y:
        print('Max number is x and y is Min: ', x)
    elif x == y:
        print('x equal y')
    else:
        print('Max number is y:', y, 'and x is Min:' , x)

printMax(), printMin(), printMax_Min()