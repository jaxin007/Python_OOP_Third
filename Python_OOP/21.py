def pause():
    programPause = input("Press the <ENTER> key to continue...")
ticket = input("Input your ticket: ")
t1 = ticket[0]
t2 = ticket[1]
t3 = ticket[2]
t4 = ticket[3]
t5 = ticket[4]
t6 = ticket[5]

summ_1 = t1 + t2 + t3
summ_2 = t4 + t5 + t6
if (summ_1 == summ_2):
    print("Поздравляю, у вас счастливый билет!")
else: 
    print("Вам повезёт в следующий раз!")
pause()