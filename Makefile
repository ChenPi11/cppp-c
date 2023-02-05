all:
	rm -rf bin
	rm -rf obj
	mkdir bin
	mkdir obj
	gcc -Icppp/include \
		-Icppp/include/libiconv \
		-Itest/include \
		cppp/src/*.c \
		test/src/*.c \
		-o bin/cppp.test.gcc.exe \
		-Wall
	g++ -Icppp/include \
		-Icppp/include/libiconv \
		-Itest/include \
		cppp/src/*.c \
		test/src/*.cpp \
		-o bin/cppp.test.g++.C++11.exe \
		-Wall \
		-std=c++11
	g++ -Icppp/include \
		-Icppp/include/libiconv \
		-Itest/include \
		cppp/src/*.c \
		test/src/*.cpp \
		-o bin/cppp.test.g++.C++14.exe \
		-Wall \
		-std=c++14
	g++ -Icppp/include \
		-Icppp/include/libiconv \
		-Itest/include \
		cppp/src/*.c \
		test/src/*.cpp \
		-o bin/cppp.test.g++.C++17.exe \
		-Wall \
		-std=c++17
	g++ -Icppp/include \
		-Icppp/include/libiconv \
		-Itest/include \
		cppp/src/*.c \
		test/src/*.cpp \
		-o bin/cppp.test.g++.C++20.exe \
		-Wall \
		-std=c++20
	g++ -Icppp/include \
		-Icppp/include/libiconv \
		-Itest/include \
		cppp/src/*.c \
		test/src/*.cpp \
		-o bin/cppp.test.g++.C++23.exe \
		-Wall \
		-std=c++23

alld:
	rm -rf bin
	rm -rf obj
	mkdir bin
	mkdir obj
	python socket2.py
	gcc -Icppp/include \
		-Icppp/include/libiconv \
		-Itest/include \
		cppp/src/*.c \
		test/src/*.c \
		-o bin/cppp.test.gcc.exe \
		-Wall
	g++ -Icppp/include \
		-Icppp/include/libiconv \
		-Itest/include \
		cppp/src/*.c \
		test/src/*.cpp \
		-o bin/cppp.test.g++.C++11.exe \
		-Wall \
		-std=c++11
	g++ -Icppp/include \
		-Icppp/include/libiconv \
		-Itest/include \
		cppp/src/*.c \
		test/src/*.cpp \
		-o bin/cppp.test.g++.C++14.exe \
		-Wall \
		-std=c++14
	g++ -Icppp/include \
		-Icppp/include/libiconv \
		-Itest/include \
		cppp/src/*.c \
		test/src/*.cpp \
		-o bin/cppp.test.g++.C++17.exe \
		-Wall \
		-std=c++17
	g++ -Icppp/include \
		-Icppp/include/libiconv \
		-Itest/include \
		cppp/src/*.c \
		test/src/*.cpp \
		-o bin/cppp.test.g++.C++20.exe \
		-Wall \
		-std=c++20
	g++ -Icppp/include \
		-Icppp/include/libiconv \
		-Itest/include \
		cppp/src/*.c \
		test/src/*.cpp \
		-o bin/cppp.test.g++.C++23.exe \
		-Wall \
		-std=c++23
	cd test && make