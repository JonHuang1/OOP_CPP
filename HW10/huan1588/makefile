OBJS = main.o QuickSort.o DotProduct.o WorkerQueue.o
CC = g++ -pthread -std=c++11
INCLUDE = 
LIBS = -lm
CFLAGS =  -Wall -g 
EXECUTABLE = HW10
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