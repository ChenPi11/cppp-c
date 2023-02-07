#!/bin/env python3
from subprocess import *
from .config import *
from .color import *
import platform
import shutil
def check(cmd):
    if(Popen(f"\"{cmd}\" --version",shell=True,stdout=PIPE,stderr=STDOUT).wait()!=0):
        return False
    else:
        return True

#mkdir noexcept
def mkdir(path):
    path=str(path)
    try:
        os.makedirs(path)
        log.info(f"mkdir: {path}")
    except Exception as e:
        if(os.path.isdir(path)):
            return
        log.error(f"mkdir: {path}: {str(e)}")
#remove file noexcept
def rm(path):
    path=str(path)
    try:
        if(not os.path.exists(path)):
            return
        os.remove(path)
        log.info(f"remove: {path}")
    except Exception as e:
        log.error(f"remove: {path}: {str(e)}")
#remove dir noexcept
def rmdir(path):
    path=str(path)
    try:
        os.rmdir(path)
        log.info(f"rmdir: {path}")
    except Exception as e:
        if(os.path.isdir(path)):
            log.error(f"rmdir: {path}: {str(e)}")
#remove dir tree noexcept
def rmtree(path):
    path=str(path)
    try:
        shutil.rmtree(path)
        log.info(f"rmtree: {path}")
    except Exception as e:
        log.error(f"rmtree: {path}: {str(e)}")
#chdir tree noexcept
def chdir(path):
    path=str(path)
    os.chdir(path)
    log.info(f"Chdir: {path}")
#rm -rf path
def rm_rf(path):
    if(not os.path.isdir(path)):
        return
    lst=list(os.listdir(path))
    for i in lst:
        i=os.path.join(path,i)
        #print(i,os.path.isdir(i))
        if(os.path.isdir(i)):
            rm_rf(i)
        else:
            rm(i)
    rmdir(path)

print(f"Checking for {GCC}... ",end="")
HAS_GCC=check(GCC)
print(HAS_GCC)

print(f"Checking for {GXX}... ",end="")
HAS_GXX=check(GXX)
print(HAS_GXX)

print(f"Checking for {MSBUILD}... ",end="")
HAS_MSBUILD=check(MSBUILD)
print(HAS_MSBUILD)

print(f"Checking for {CLANG}... ",end="")
HAS_CLANG=check(CLANG)
print(HAS_CLANG)

print(f"Checking for {CLANGXX}... ",end="")
HAS_CLANGXX=check(CLANGXX)
print(HAS_CLANGXX)

print(f"Checking for platform... ",end="")
PLATFORM=platform.uname().system
print(PLATFORM)

if(not (HAS_GCC or HAS_MSBUILD or HAS_CLANG or HAS_GXX or HAS_CLANGXX)):
    log.error("You do not have any compiler in 'gcc,msbuild,clang,g++,clang++'!")
    raise SystemExit(1)

HAS_WINDOWS=True
if(PLATFORM!="Windows"):
    HAS_WINDOWS=False
    cprint(colors["yellow"],"msbuild==>False")

os.chdir("..")#chdir to project root
ROOT=os.path.abspath(os.curdir)

def nullfunc(*a,**kw): ...

all_targets={}
builded_targets={}

sucs=[]
errs=[]
igns=[]

def register_target(name,func):
    global all_targets
    name=name.lower()
    all_targets[name]=func

def call_target(name):
    global all_targets
    name=name.lower()
    try:
        t=all_targets.pop(name)
        builded_targets[t]=0
        try:
            ret=t()
            if(ret==ERRIGN):
                igns.append(name)
            else:
                sucs.append(name)
        except KeyboardInterrupt:
            errs.append(name)
            raise
        except SystemExit:
            raise
        except Exception:
            errs.append(name)
            builded_targets[t]=-1
    except KeyError:
        if(name in builded_targets):
            return
        raise Exception(f"Unknown target: {name}")

def clean():
    log.info("Cleaning...")
    rm(os.path.join(ROOT,RESFILE))
    rm_rf(os.path.join(ROOT,BIN))
    rm_rf(os.path.join(ROOT,OBJ))
    log.suc("Cleaned.")

def build():
    log.info("Start C++ Plus building...")
    all=list(all_targets.keys())
    now=0
    st=time.time()
    for target in all:
        if(target in all_targets):
            log.info("Call target: "+target)
            now+=1
            tasktitle(target,"building",now,len(all))
            call_target(target)
            progressbar(now,len(all))
    rem=time.time()-st
    f=open(RESFILE,"w")
    f.write(f"time:{str(rem)}\n")
    f.write(f"suc({len(sucs)}/{len(all_targets)}):")
    for i in sucs:
        f.write("\t"+i+"\n")
    f.write(f"ign({len(igns)}/{len(all_targets)}):")
    for i in igns:
        f.write("\t"+i+"\n")
    f.write(f"err({len(sucs)}/{len(all_targets)}):")
    for i in errs:
        f.write("\t"+i+"\n")
    f.close()
    for i in range(3):
        printf("="*term_width(),"\n")
    cprint(colors["green"],f"C++ Plus build done. result has been written in \"{RESFILE}\"")
    printf(f"{str(len(sucs))} success(es), {str(len(errs))} error(s), {str(len(igns))} ignorance","\n")

def rebuild():
    clean()
    build()