a = int(input('Enter first integer: \t'))
b = int(input('Enter second integer: \t'))
c = int(input('Enter third integer: \t'))
mn = min (a, b, c)
mx = max (a, b, c)
md = mx - mn
if (a + b + c) < 1:
    mn = (mx + md)/2
    print('Minimal converted to: \t', mn)
else:
    print('no')