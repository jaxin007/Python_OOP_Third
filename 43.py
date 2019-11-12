a = int(input('Enter first integer: \t'))
b = int(input('Enter second integer: \t'))
c = int(input('Enter third integer: \t'))
def check (i):
    if i > 0:
        print(i**2)
    else:
        print(i, 'is negative')
check(a)
check(b)
check(c)

