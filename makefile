CC = gcc
FLAGS = -Wall -Werror
TESTFLAG = -I thirdparty -I src -Wall -Werror

EXEC = bin/ggg
TESTEXEC = bin/ddd

SRS_BUILD = build/src
TESTBUILD = build/test

all: ggg test-prog
# all: test-prog

ggg: $(SRS_BUILD)/prog.o $(SRS_BUILD)/func.o
	mkdir -p bin
	$(CC) $(SRS_BUILD)/prog.o $(SRS_BUILD)/func.o -o $(EXEC)

$(SRS_BUILD)/prog.o: src/prog.c
	mkdir -p build
	$(CC) $(FLAGS) -c src/prog.c -o $(SRS_BUILD)/prog.o

$(SRS_BUILD)/func.o: src/func.c
	$(CC) $(FLAGS) -c src/func.c -o $(SRS_BUILD)/func.o

test-prog: $(TESTBUILD)/main.o $(SRS_BUILD)/func.o $(TESTBUILD)/validation_test.o $(TESTBUILD)/deposit_test.o
	$(CC) $(TESTBUILD)/main.o $(SRS_BUILD)/func.o $(TESTBUILD)/validation_test.o $(TESTBUILD)/deposit_test.o -o $(TESTEXEC) 

$(TESTBUILD)/main.o: test/main.c
	$(CC) $(TESTFLAG) -c test/main.c -o $(TESTBUILD)/main.o

$(TESTBUILD)/validation_test.o: test/validation_test.c
	$(CC) $(TESTFLAG) -c test/validation_test.c -o $(TESTBUILD)/validation_test.o

$(TESTBUILD)/deposit_test.o: test/deposit_test.c
	$(CC) $(TESTFLAG) -c test/deposit_test.c -o $(TESTBUILD)/deposit_test.o


.PHONY: clean
clean: 
	rm -rf build/*.o

	
