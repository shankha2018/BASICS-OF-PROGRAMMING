empinfo=dict()
n=int(input("enter total number of employees"))
i=1
while i<=n:
    a=int(input("enter number"))
    b=input("enter name")
    empinfo[a]=b
    i=i+1
    l=empinfo.keys()
    
print("employee information")
print("employee number","\t","employee name")
for i in sorted(l):
    print(i,"\t\t\t",empinfo[i])
    
