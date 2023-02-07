f=open("_platform.h")
w=open("_p.h","w")
for i in f:
    r=i
    if(i.startswith("//")):
        r=i.replace("//","/*").rstrip()+"*/\n"
    w.write(r)
w.close()
f.close()