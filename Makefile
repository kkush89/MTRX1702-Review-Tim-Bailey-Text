CC=gcc 			
CFLAGS= -g -Wall -Wpedantic -Wextra  -Werror -Wuninitialized -fsanitize=address
LIBS= -lm	    
TARGET= helloWorld

sourceFILES = $(wildcard *.c) 
#headerFILES = $(wildcard *.c)
objectFiles = $(wildcard *.o)



.phony: all
all:  $(TARGET)

$(TARGET):$(objectFiles)
	$(CC) $(CFLAGS) -o $(TARGET) $(sourceFILES) $(LIBS)

helloWorld.o: firstProgram.c
	$(CC) -c $(CFLAGS) -o helloWorld.o firstProgram.c


#$(CC) -o $(TARGET) $(objectFiles)

.PHONY : clean
clean:
	-rm $(TARGET) $(objectFiles)



