CC = g++
CFLAGS = -g -Wall 
BUILDDIR = build
SOURCEDIR = tests
TARGET = launch_checker

$(TARGET): palindrome.o utils.o
	$(CC) $(CFLAGS) $(BUILDDIR)/palindrome.o $(BUILDDIR)/utils.o -o $(BUILDDIR)/$(TARGET)

test_plan: test_plan.o utils.o
	$(CC) $(CFLAGS) $(SOURCEDIR)/test_plan.o $(BUILDDIR)/utils.o -o $(SOURCEDIR)/test_plan

test_plan.o: utils.hpp test_plan.cpp
	$(CC) $(CFLAGS) -c $(SOURCEDIR)/test_plan.cpp -o $(SOURCEDIR)/test_plan.o

palindrome.o: palindrome.cpp
	$(CC) $(CFLAGS) -c palindrome.cpp -o $(BUILDDIR)/palindrome.o

utils.o: utils.hpp utils.cpp
	$(CC) $(CFLAGS) -c utils.cpp -o $(BUILDDIR)/utils.o

clean:
	rm -f core $(BUILDDIR)/*.o $(SOURCEDIR)/*.o $(BUILDDIR)/$(TARGET) $(SOURCEDIR)/test_plan
