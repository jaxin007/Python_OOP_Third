from random import randrange
n,m = 10, 50
x = []
i=0
S = 0
w =[[0 for j in range(n)] for i in range(n)]
while i<n:
    y =randrange(1, m+1)
    if y not in x:
        x.append(y)
        i+=1
x = sorted(x)
print('X = ', x)
for i in range(n):
    for j in range(n):
        if x[i] >= x[j]:
            print('(',x[i],',' ,x[j],')', end='')
            w[i][j] = 1
print()
for i in range(n):
    print(w[i])
for i in range(n):
    S += w[i][i]
if S == 10:
    print("Vidnoshenya refleksivne")
elif S == 0:
    print("Vidnoshenya antirefleksivne")
else:
    print("Vidnoshenya ni refleksivne ni antirefleksivne")
S1 =True
for i in range(n-1):
    for j in range (i, n):
        if w [i][j] != w[j][i]:
          S1 = False
if S1:
    print("Vidnoshenya simmetrichne")
elif S==10:
    print("Vidnoshnya antisimetrichne")
elif S==0:
    print("Vidnoshenya asimetrichne")
else:
    print("Vidnoshenya ne mae simetrii")
S2 = True
for i in range(n):
    for j in range(n):
        for k in range(n):
            if w[i][k]==1 and w[k][j]==1:
                if w[i][j]==1:
                    continue
                else:
                    S2= False
if S2:
    print("Vidnoshenya tranzitivne")
else:
    print("Vidnoshenya ne mae vlastivosti tranzitivnosti")
