import math
def armstrong():
    n=int(input("enter a no."))
    b=n
    s=0
    while n>0:
        r=n%10
        s=s + math.pow(r,3)
        n=n//10
    if s==b:
        print("armstrong number")
    else:
        print("not armstrong number")
    
armstrong()
