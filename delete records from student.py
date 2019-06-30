f=open("student.txt","r")
s=open("deletedstudent.txt","w")
a=input("enter the student id to be deleted")
while True:
    x=f.readline()
    if not x:
        break
    l=x.split("#")
    if l[0]!=a:
        s.write(x)
f.close()
s.close()
