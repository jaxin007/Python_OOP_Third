a, b, c = float(input('Choose a: ')), float(input('Choose b: ')), float(input('Choose c: '))
def check(a, b, c):
    if (a + b) > c and (a + c) > b and (b + c) > a:
        print('Triangle is exist!')
        mx = max(a, b, c)
        mn = min(a, b, c)
        md = (a + b + c) - (mx + mn)
        if mx**2 < mn**2 + md**2:
            print('Triangle is acute-angeled!')
        else:
            print('Triangle is not acute-angeled!')
    else:
        print('Triangle is not exist!')
check(a, b, c)
