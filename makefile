CC = gcc
FLAGS = -Wall -Werror
TESTFLAGS - -I includes -I src -Wall -Werror
EXEC = bin/ggg
TEST_EXEC = bin/testRun

SRS_BUILD = build/src
TEST_BUILD = build/test

all: prog testProg

all: $(SRS_BUILD)/prog.o $(SRS_BUILD)/func.o
	mkdir -p bin
	$(CC) $(SRS_BUILD)/prog.o $(SRS_BUILD)/func.o -o $(EXEC)

$(SRS_BUILD)/prog.o: src/prog.c
	mkdir -p build
	$(CC) $(FLAGS) -c src/prog.c -o $(SRS_BUILD)/prog.o

$(SRS_BUILD)/fukn.o: src/func.cpp
	$(CC) $(FLAGS) -c src/func.c -o $(SRS_BUILD)/func.o

clean: 
	rm: -rf build/*.o


	
