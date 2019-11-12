a = int(input('Enter first integer: \t'))
b = int(input('Enter second integer: \t'))
if a == b:
    print('First integer shouldn`t be equal to second one!')
else:
    if a < b:
        a = (a + b)/2
        print ('First integer now is: \t', a)
    else:
        b = (a + b)/2
        print ('First integer now is: \t', b)
    if a > b:
        a = (a * b) * 2
        print ('Second integer now is: \t', a)
    else:
        b = (a * b) * 2
        print ('Second integer now is: \t', b)
         