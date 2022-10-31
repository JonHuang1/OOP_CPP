OBJS = main.o DecoyDuck.o Duck.o FlyNoWay.o FlyWithWings.o MallardDuck.o \
		MuteQuack.o Quack.o RedHeadDuck.o Squeak.o
CC = g++
INCLUDE = 
LIBS = -lm
CFLAGS = -std=c++11 -Wall -g
EXECUTABLE = HW9
COMMANDLINE = 

.PHONY : run
run : $(EXECUTABLE)
	# valgrind -s ./$(EXECUTABLE) $(COMMANDLINE)
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