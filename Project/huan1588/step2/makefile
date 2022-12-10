OBJS = 
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
