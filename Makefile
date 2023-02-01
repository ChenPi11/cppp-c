all:
	rm -rf bin
	rm -rf obj
	mkdir bin
	mkdir obj
	g++ -Icppp/include \
		-Icppp/include/libiconv \
		-Itest/include \
		cppp/src/*.c \
		test/src/*.c \
		-o bin/out.exe \
		-Wall
	bin/out.exe