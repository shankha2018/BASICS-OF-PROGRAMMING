phonebook=dict()
n=int(input("enter total no. of friends"))
i=1
while i<=n:
    a=input("enter name")
    b=int(input("enter phone number"))
    phonebook[a]=b
    i=i+1
m=input("enter name to be deleted")
del phonebook[m]
l=phonebook.keys()
print("phonebook information")
print ("name","  \t","phone number")
for i in l:
    print(i,"   \t",phonebook[i])
    
