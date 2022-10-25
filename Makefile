CFLAGS = -O
CC = gcc

list: major1.o power.o reverse.o replace.o palindrome.o
	$(CC) $(CFLAGS) -o major1 major1.o power.o reverse.o replace.o palindrome.o -lm

major1.o: major1.c major1.h
	$(CC) $(CFLAGS) -c major1.c

power.o: power.c major1.h
	$(CC) $(CFLAGS) -c power.c 

reverse.o: reverse.c major1.h
	$(CC) $(CFLAGS) -c reverse.c 

replace.o: replace.c major1.h
	$(CC) $(CFLAGS) -c replace.c 

palindrome.o: palindrome.c major1.h
	$(CC) $(CFLAGS) -c palindrome.c

clean:
	rm -f major1 *.o
