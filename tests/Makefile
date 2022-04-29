
CC = g++
CFLAGS = -g -Wall 
BUILDDIR = build
TARGET = testplan

$(TARGET): test_plan.o ../$(BUILDDIR)/utils.o
	$(CC) $(CFLAGS) test_plan.o ../$(BUILDDIR)/utils.o -o $(TARGET)

test_plan.o: test_plan.cpp
	$(CC) $(CFLAGS) -c test_plan.cpp -o test_plan.o

clean:
	rm -f core *.o $(TARGET)
