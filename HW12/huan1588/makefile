OBJS = main.o Person.o Student.o TA.o Teacher.o
CC = g++ -std=c++11 -Wall -g
INCLUDE = 
LIBS = -lm
CFLAGS =   
EXECUTABLE = HW12
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