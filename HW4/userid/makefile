OBJS = main.o DecoyDuck.o DoesNotLayEggs.o Duck.o \
		FlyNoWay.o FlysPoorly.o FlyWithWings.o \
		LaysEggsBroody.o LaysEggsNotBroody.o MallardDuck.o \
		MuteQuack.o PekinDuck.o Quack.o RedHeadDuck.o \
		Squeak.o LaysToyEggs.o ToyDuck.o
CC = g++
INCLUDE = 
LIBS = -lm
CFLAGS = -std=c++11 -Wall -g
EXECUTABLE = HW4
COMMANDLINE = 

.PHONY : run
run : $(EXECUTABLE)
	./$(EXECUTABLE) $(COMMANDLINE)

cleanmake : clean $(EXECUTABLE)

.PHONY : $(EXECUTABLE)
$(EXECUTABLE) :  $(OBJS)
	$(CC) $(OPTIONS) -o $(EXECUTABLE) $(OBJS) $(INCLUDE) $(LIBS)

%.o : %.c 
	$(CC) $(OPTIONS) -c $@ $(INCLUDE) $(LIBS)

clean :
	rm $(EXECUTABLE) ${OBJS}