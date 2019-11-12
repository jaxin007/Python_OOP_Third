a = int(input('Enter first integer: \t'))
b = int(input('Enter second integer: \t'))
c = int(input('Enter third integer: \t'))
def check (c):
    if (1<=c<=3):
        print( c,'belongs to (1, 3)')
        return c
    else:
        print(c, 'doesn`t belongs to (1, 3)')
        return c
check(a)
check(b)
check(c)
