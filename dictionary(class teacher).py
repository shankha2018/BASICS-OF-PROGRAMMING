classxi=dict()
n=int(input("enter total no. of section in xi class"))
i=1
while i<=n:
    a=input("enter section")
    b=input("enter class teacher name")
    classxi[a]=b
    i=i+1
print("class","\t","section","\t","teacher name")
for i in classxi:
    print("XI","\t",i,"\t",classxi[i])
    
    
