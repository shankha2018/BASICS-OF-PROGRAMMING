phonebook=dict()
n=int(input("enter total no. of friends"))
i=1
while i<=n:
    a=input("enter name")
    b=int(input("enter phone number"))
    phonebook[a]=[b]
    i=i+1
name=input("enter name")
f=0
l=phonebook.keys()
for i in l:
    if i==name:
        print("phone number=",phonebook[i])
        f=1
if f==0:
    print("name doesnot exist")
    
