OBJS = main.o Array2D.o
CC = g++
INCLUDE = 
LIBS = -lm
CFLAGS = -std=c++11 -Wall -g
EXECUTABLE = HW7
COMMANDLINE = 

.PHONY : run
run : $(EXECUTABLE)
	valgrind -s ./$(EXECUTABLE) $(COMMANDLINE)
	./$(EXECUTABLE) $(COMMANDLINE)
	make clean

cleanmake : clean $(EXECUTABLE)

.PHONY : $(EXECUTABLE)
$(EXECUTABLE) :  $(OBJS)
	$(CC) $(OPTIONS) -o $(EXECUTABLE) $(OBJS) $(INCLUDE) $(LIBS)

%.o : %.c 
	$(CC) $(OPTIONS) -c $@ $(INCLUDE) $(LIBS)

clean :
	rm $(EXECUTABLE) ${OBJS}