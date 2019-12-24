import math


class Romb(object):
    def pi_Romb(self, dl_rebr):
        return (dl_rebr * 4)

    def pl_Romb(self, dl_rebr, dl_vis):
        return (dl_rebr * dl_vis)


class Pryamougolnik(object):
    def pi_Pryamougolnik(self, rebr_a, rebr_b):
        return float(rebr_a + rebr_b) * 2

    def pl_Pryamougolnik(self, rebr_a, rebr_b):
        return float(rebr_a + rebr_b)


class Ellipse(object):
    def pi_Ellipse(self, dl_rebr_a, dl_rebr_b):
        pi = float(3.14)
        return 4 * ((pi * dl_rebr_a * dl_rebr_b + (dl_rebr_a - dl_rebr_b) ** 2) / (dl_rebr_a + dl_rebr_b))

    def pl_Ellipse(self, dl_rebr_a, dl_rebr_b):
        pi = float(3.14)
        return pi * dl_rebr_a * dl_rebr_b


while True:
    print('First: rhombus')
    print('Second: rectangle')
    print('Third: ellips')
    chooseFigure = input('Choose figure: ')
    if chooseFigure == '1':
        print('First: perimetr')
        print('Second: square')
        vibor_fun = input('Choose desicion: ')
        if vibor_fun == '1':
            p = Romb()
            print(p.pi_Romb(dl_rebr=float(input('Choose lenght of side: '))))
        elif vibor_fun == '2':
            p = Romb()
            print(p.pl_Romb(dl_rebr=float(input('Choose lenght of side: ')),
                            dl_vis=float(input('Choose height: '))))

    if chooseFigure == '2':
        print('First: perimetr of rectangle')
        print('Second: square of rectangle')
        vibor_fun = input('Choose desigion: ')
        if vibor_fun == '1':
            p = Pryamougolnik()
            print(p.pi_Pryamougolnik(rebr_a=float(input(
                'Choose first side: ')), rebr_b=float(input('Choose second side: '))))
        if vibor_fun == '2':
            p = Pryamougolnik()
            print(p.pl_Pryamougolnik(rebr_a=float(input('Choose side: ')),
                                     rebr_b=float(input('Choose height: '))))

    if chooseFigure == '3':
        print('First: perimetr of ellips')
        print('Second: square of ellips')
        vibor_fun = input('Choose desigion: ')
        if vibor_fun == '1':
            p = Ellipse()
            print(p.pi_Ellipse(dl_rebr_a=float(input('Choose lenght of a side: ')),
                               dl_rebr_b=float(input('Choose lenght of a side: '))))
        if vibor_fun == '2':
            p = Ellipse()
            print(p.pl_Ellipse(dl_rebr_a=float(
                input('Choose lenght of a side: ')), dl_rebr_b=float(input('Choose height: '))))

    restart = int(input('Again? 1 - Yes. 2 - No.'))
    if restart:
        continue
    elif restart == 2:
        print('')
        break
