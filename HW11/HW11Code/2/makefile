OBJS = mainDynamicCast.o Person.o Student.o Faculty.o
CC = g++ 
INCLUDE = 
LIBS = -lm
CFLAGS =  -Wall -g -std=c++11
EXECUTABLE = HW11
COMMANDLINE = 

.PHONY : run
run : $(EXECUTABLE)
	# valgrind -s ./$(EXECUTABLE) $(COMMANDLINE)
	./$(EXECUTABLE) $(COMMANDLINE)
	make clean

cleanmake : clean $(EXECUTABLE)

.PHONY : $(EXECUTABLE)
$(EXECUTABLE) :  $(OBJS)
	$(CC) $(CFLAGS) $(OPTIONS) -o $(EXECUTABLE) $(OBJS) $(INCLUDE) $(LIBS)

%.o : %.c 
	$(CC) $(CFLAGS) $(OPTIONS) -c $@ $(INCLUDE) $(LIBS)

clean :
	rm $(EXECUTABLE) ${OBJS}