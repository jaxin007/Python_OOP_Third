from math import*


def automorph(i):
    k = 0
    p = 0
    di = 0
    di = i
    while (i > 0):
        k += 1
        i = i // 10
    if (di**2 % round(pow(10, k)) == di):
        return True
    else:
        return False


print(automorph(100))
