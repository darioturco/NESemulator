EXTRAFLAGS:=-no-pie -Wall -Werror -pedantic --std=c99 -ggdb
FILES=cpu.c
EXE=main

all:
	gcc -o $(EXE) ./src/*.c ./src/*.h $(EXTRAFLAGS)

clean:
	rm ./main