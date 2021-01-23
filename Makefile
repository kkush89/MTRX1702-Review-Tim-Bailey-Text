CC=gcc 			
CFLAGS= -g -Wall -Wpedantic -Wextra  -Werror -Wuninitialized -fsanitize=address
LIBS= -lm	    
TARGET= test

sourceFILES = TypOpExp.c
#headerFILES = $(wildcard *.c)
objectFiles = $(wildcard *.o)



.phony: all
all:  $(TARGET)

$(TARGET):$(objectFiles)
	$(CC) $(CFLAGS) -o $(TARGET) $(sourceFILES) $(LIBS)

test.o: TypOpExp.c
	$(CC) -c $(CFLAGS) -o test.o TypOpExp.c


#$(CC) -o $(TARGET) $(objectFiles)

.PHONY : clean
clean:
	-rm $(TARGET) $(objectFiles)
