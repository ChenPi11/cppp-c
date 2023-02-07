#!/bin/env python3
from builder.builder_base import *
def msbuild():
    conf="all"
    chdir("test")
    p=Popen([MSBUILD,os.path.join(ROOT,MSBUILD_SLN),"-p:Configuration="+conf,"-m"],shell=True)
    chdir("..")
    return p.wait()
def msbuild_build(name):
    try:
        log.info(f"Building: {name}")
        if(HAS_MSBUILD):
            ret=msbuild()
            if(ret!=0):
                raise Exception("msbuild build failed:"+str(ret))
            log.suc(f"Complete: {name}")
        else:
            log.suc(f"Ignored: {name}")
    except KeyboardInterrupt:
        if(YN("\nCancel C++ Plus Build?")):
                raise SystemExit(1)
        log.warn(f"Ignore: {name} (Ctrl+C KeyboardInterrupt)")
        return ERRIGN
    except Exception as e:
        log.error(f"Failed: build {name} : {str(e)}")

def gnuc(name,compiler,test_src,std):
    outname=name
    if(HAS_WINDOWS):
        outname+=".exe"
    INC=" ".join(list(map((lambda i : f"-I{i}"),INCLUDES+TEST_INCLUDES)))
    SRC=" ".join(list(SRCS+test_src))
    OUT=f"{BIN}{SEP}{outname}"
    OBJOUT=f"{OBJ}{SEP}{name}"
    mkdir(OBJOUT)
    FORMAT=f"\"{compiler}\" {INC} {SRC} -o \"{OBJOUT}{SEP}{outname}\" -save-temps=obj -std={std} {GCC_CLANG_OTHERS}"
    print(FORMAT)
    p=Popen(FORMAT,shell=True)
    ret=p.wait()
    if(ret!=0):
        raise Exception(f"{compiler.replace(SEP,os.path.sep).split(os.path.sep)[-1]} build failed: "+str(ret))
    mkdir(BIN.replace(SEP,os.path.sep))
    shutil.move(f"{OBJOUT}{os.path.sep}{outname}",f"{OUT}".replace(SEP,os.path.sep))
    log.suc(f"Build: {name} complete")
    log.info(f"Testing: {name} ...")
    p=Popen(f"{OUT}".replace(SEP,os.path.sep),shell=True)
    ret=p.wait()
    if(ret!=0):
        raise Exception("test failed: "+str(ret))
    log.suc(f"Test: {name} complete")

def gcc_build(std,name):
    try:
        log.info(f"Building: {name}")
        if(HAS_GCC):
            gnuc(name,GCC,TESTC_SRCS,std)
            log.suc(f"Complete: {name}")
        else:
            log.suc(f"Ignored: {name}")
    except KeyboardInterrupt:
        if(YN("\nCancel C++ Plus Build?")):
            raise SystemExit(1)
        log.warn(f"Ignore: {name} (Ctrl+C KeyboardInterrupt)")
        return ERRIGN
    except SystemExit:
        raise
    except Exception as e:
        log.error(f"Failed: build {name} : {str(e)}")

def gxx_build(std,name):
    try:
        log.info(f"Building: {name}")
        if(HAS_GXX):
            gnuc(name,GXX,TESTCPP_SRCS,std)
            log.suc(f"Complete: {name}")
        else:
            log.suc(f"Ignored: {name}")
    except KeyboardInterrupt:
        if(YN("\nCancel C++ Plus Build?")):
            raise SystemExit(1)
        log.warn(f"Ignore: {name} (Ctrl+C KeyboardInterrupt)")
        return ERRIGN
    except SystemExit:
        raise
    except Exception as e:
        log.error(f"Failed: build {name} : {str(e)}")

def clang_build(std,name):
    try:
        log.info(f"Building: {name}")
        if(HAS_GCC):
            gnuc(name,GCC,TESTC_SRCS,std)
            log.suc(f"Complete: {name}")
        else:
            log.suc(f"Ignored: {name}")
    except KeyboardInterrupt:
        if(YN("\nCancel C++ Plus Build?")):
            raise SystemExit(1)
        log.warn(f"Ignore: {name} (Ctrl+C KeyboardInterrupt)")
        return ERRIGN
    except SystemExit:
        raise
    except Exception as e:
        log.error(f"Failed: build {name} : {str(e)}")

def clangxx_build(std,name):
    try:
        log.info(f"Building: {name}")
        if(HAS_GXX):
            gnuc(name,GXX,TESTCPP_SRCS,std)
            log.suc(f"Complete: {name}")
        else:
            log.suc(f"Ignored: {name}")
    except KeyboardInterrupt:
        if(YN("\nCancel C++ Plus Build?")):
            raise SystemExit(1)
        log.warn(f"Ignore: {name} (Ctrl+C KeyboardInterrupt)")
        return ERRIGN
    except SystemExit:
        raise
    except Exception as e:
        log.error(f"Failed: build {name} : {str(e)}")

_tarname=""
for std in CSTDS:
    _tarname=CPPP_TEST+".gcc."+std
    exec(f"register_target({repr(_tarname)},lambda:gcc_build({repr(std)},{repr(_tarname)}))")
for std in CPPSTDS:
    _tarname=CPPP_TEST+".g++."+std
    exec(f"register_target({repr(_tarname)},lambda:gxx_build({repr(std)},{repr(_tarname)}))")
for std in CSTDS:
    _tarname=CPPP_TEST+".clang."+std
    exec(f"register_target({repr(_tarname)},lambda:clang_build({repr(std)},{repr(_tarname)}))")
for std in CPPSTDS:
    _tarname=CPPP_TEST+".clang++."+std
    exec(f"register_target({repr(_tarname)},lambda:clangxx_build({repr(std)},{repr(_tarname)}))")
_tarname=CPPP_TEST+".msvc"
exec(f"register_target({repr(_tarname)},lambda:msbuild_build({repr(_tarname)}))")