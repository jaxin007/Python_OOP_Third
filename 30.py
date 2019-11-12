# Дано действительное число х. Не пользуясь никакими другими арифметическими операциями, кроме умножения, сложения и вычитания, вычислить
# Разрешается использовать не более восьми операций.

def first():
    x = int(input('Choose your x: '))
    _2 = 2 * x 
    _3 = 3 * x**2
    _4 = 4 * x**3
    result = 1 - _2 + _3 - _4
    return(result)
print(first())

def second():
    x = int(input('Choose your x: '))
    _2 = 2 * x
    _3 = 3 * x**2
    _4 = 4 * x**3
    result = 1 + _2 + _3 + _4
    return(result)
print(second())