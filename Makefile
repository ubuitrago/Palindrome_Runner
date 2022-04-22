CC = g++
CFLAGS = -g -Wall 

launch_checker: palindrome.o utils.o
	$(CC) $(CFLAGS) -o launch_checker palindrome.o utils.o

palindrome.o: palindrome.cpp
	$(CC) $(CFLAGS) -c palindrome.cpp

utils.o: utils.hpp utils.cpp
	$(CC) $(CFLAGS) -c utils.cpp

clean:
	rm -f core *.o launch_checker