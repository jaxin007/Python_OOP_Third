# x = int(input('Choose x: '))

# y = int(input('Choose y: '))

# z = int(input('Choose z: '))

x, y, z = int(input('Choose x: ')), int(input('Choose y: ')), int(input('Choose z: '))

if x > y and z:
    print('Max number is x:', max(x, y, z))
elif y > x and z:
    print('Max number is y:', max(x, y, z))
elif x == y and z:
    print('Numbers are equal')
else:
    print('Max number is z:', z)
x, y, z = int(input('Choose x: ')), int(
    input('Choose y: ')), int(input('Choose z: '))

if x > y and z:
    print('Max number is x:', max(x, y, z))
elif y > x and z:
    print('Max number is y:', max(x, y, z))
elif x == y and z:
    print('Numbers are equal')
else:
    print('Max number is z:', z)
