x, y, z = int(input('Choose x: ')), int(input('Choose y: ')), int(input('Choose z: '))

first = max(x + y + z, x * y * z)
print('max(x + y + z, x * y * z): ', first)

sec = min(x + y + z/2, x * y * z) 
second = sec**2 + 1
print('min**2(x + y + z/2, x * y * z) + 1: ', second)
