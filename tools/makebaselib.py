from shutil import *
from platform import *
import os
import sys
import time
FILE=input("src file:")
def seppath(p):
    if(uname()[0]=="Windows"):
        return p.replace("/","\\")
    return p.replace("\\","/")
def findinclude(p,f):
    res=[]
    inc_code=[]
    lines=f.readlines()
    for x in range(len(lines)):
        i=lines[x]
        i=i.strip()
        s=i.replace(" ","").replace("\t","")
        if(s.startswith("#include\"")):
            inc_code.append(x)
            start=i.find("\"")
            end=i.find("\"",start+1)
            inc=i[start+1:end]
            inc=os.path.join(p,"..",inc)
            inc=os.path.abspath(inc)
            res.append(inc)
    f.seek(0)
    return res,inc_code

included=[]
data=""
def getincs(fn):
    print(fn)
    f=open(fn)
    incs=list(zip(*findinclude(fn,f)))
    dt=f.readlines()
    for fp,ln in incs:
        if(not fp in included):
            included.append(fp)
            dt[ln]=getincs(str(fp))
        else:
            dt[ln]=""
    return "".join(dt)

p=(getincs(os.path.abspath(FILE)))


print(p,file=sys.stderr)
