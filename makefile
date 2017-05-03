CC = g++
FLAGS = -Wall -Werror
EXEC = bin/ggg

SRS_BUILD = build

all: $(SRS_BUILD)/prog.o $(SRS_BUILD)/fukn.o
	mkdir -p bin
	$(CC) $(SRS_BUILD)/prog.o $(SRS_BUILD)/fukn.o -o $(EXEC)

$(SRS_BUILD)/prog.o: src/prog.cpp
	mkdir -p build
	$(CC) $(FLAGS) -c src/prog.cpp -o $(SRS_BUILD)/prog.o

$(SRS_BUILD)/fukn.o: src/fukn.cpp
	$(CC) $(FLAGS) -c src/fukn.cpp -o $(SRS_BUILD)/fukn.o

clean: 
	rm: -rf build/*.o


	
