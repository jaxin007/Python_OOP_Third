a = int(input('Enter first intrger: \t'))
b = int(input('Enter second intrger: \t'))
c = int(input('Enter third intrger: \t'))
d = int(input('Enter fourth intrger: \t'))
mx = max(a, b, c, d)
if a <= b <= c <= d:
    a = mx
    b = mx
    c = mx
    d = mx
    print(a, b, c, d)
elif a > b > c > d:
    print(a, b, c, d)



