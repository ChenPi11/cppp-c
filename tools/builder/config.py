#!/bin/env python3
# C++ Plus Builder config
SEP="/"
MSBUILD="msbuild"
GCC="gcc"
GXX="g++"
CLANG="clang"
CLANGXX="clang++"

INCLUDES=[f"cppp{SEP}include",f"cppp{SEP}include{SEP}libiconv"]
SRCS=[f"cppp{SEP}src{SEP}*.c"]

MSBUILD_SLN=f"test{SEP}cppp.test.msvc.sln"

TESTC_SRCS=[f"test{SEP}src{SEP}*.c"]
TESTCPP_SRCS=[f"test{SEP}src{SEP}*.cpp"]
TEST_INCLUDES=[f"test{SEP}include"]

CSTDS=["c90","c99","c11","c17"]
CPPSTDS=["c++11","c++14","c++17","c++20","c++23"]


BIN="bin"
OBJ="obj"
GCC_CLANG_OTHERS="-Wall -O2"

CPPP_TEST="cppp.test"

ERRIGN=3

RESFILE="build.log"