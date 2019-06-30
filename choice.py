print("choice 1:area of square")
print("choice 2:area of rectangle")
print("choice 3:area of triangle")
c=int(input("enter any choice (1/2/3)\n"))
if c==1:
    s=int(input("enter any side of the square"))
    a=s*s
    print("area of square =",a)
elif c==2:
    l=int(input("enter length of rectangle"))
    b=int(input("enter breadth of rectangle"))
    a=l*b
    print("area of rectangle =",a)
elif c==3:
    x=int(input("enter first side of triangle"))
    y=int(input("enter second side of triangle"))
    z=int(input("enter third side of triangle"))
    s=(x+y+z)/2
    a=((s-x)*(s-y)*(s-z))**0.5
    print("area=",a)
else:
    print("SORRY!!Choice Doesnot Exist")
    
    
