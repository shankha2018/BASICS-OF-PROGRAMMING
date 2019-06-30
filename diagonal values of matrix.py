import random
m=int(input("enter total no.of rows in the matrix"))
n=int(input("enter total no.of columns in the matrix"))
a=[[random.random()for row in range(m)]for col in range(n)]
if m==n:
    print("ENTER ELEMENTS ONE BY ONE:")
    for i in range(m):
        for j in range(n):
            a[i][j]=input()
    print("YOUR MATRIX:")
    for i in range(m):
        for j in range(n):
            print(a[i][j],'\t',end="")
        print()
    print("first diagonal")
    for i in range(m):
        print(a[i][i],'\t',end="")
    print()
    k=m-1
    print("second diagonal")
    for j in range(m):
        print(a[j][k],'\t',end="")
        k=k-1
else:
    print("diagonal values are not possible")
