EXTRAFLAGS:=-no-pie -pedantic -ggdb
FILES=cpu.c
EXE=main

all:
	g++ -o $(EXE) ./src/*.cpp ./src/*.h $(EXTRAFLAGS)

clean:
	rm ./main