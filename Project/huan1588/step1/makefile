OBJS = main.o start.o tableentry.o symboltable.o Exit.o pushi.o printtos.o \
add.o prints.o string_buffer.o Div.o dup.o mul.o negate.o pop.o swap.o \
instruction_buffer.o label.o jump.o

CC=g++ -std=c++14 -Wall -g
INCLUDE= 
LIBS=-lm
OPTIONS=
EXECUTABLE=project
COMMANDLINE= 
SRC=$(wildcard *.cpp)

all:
	$(CC) $(OPTIONS) $(SRC) -o $(EXECUTABLE)

run : $(EXECUTABLE)
	# valgrind -s ./$(EXECUTABLE) $(COMMANDLINE)
	./$(EXECUTABLE) $(COMMANDLINE)
	make clean
	
# %.o : %.c 
# 	$(CC) $(OPTIONS) -c -g $@ $(INCLUDE) $(LIBS)

%.o : %.c 
	g++ -std=c++11 -Wall -g -c $@ $(INCLUDE) $(LIBS)

clean :
	rm $(EXECUTABLE) ${OBJS}
