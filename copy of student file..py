f=open("student.txt","r")
s=open("studentcopy.txt","w")
while True:
    x=f.readline()
    s.write(x)
    if not x:
        break
f.close()
s.close()
