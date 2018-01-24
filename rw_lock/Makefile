CXX = g++
CXXFLAGS = -Wall -Werror -g -pthread -pedantic -std=c++11

# Change for CAEN
LIBTHREAD = libthread.o
LDFLAGS = -ldl $(LIBTHREAD)

# Executable. Cpp file must match this.
EXEC = rw_lock

# Simple example where we can set a breakpoint, do prints, and basics
$(EXEC): $(LIBTHREAD) $(EXEC).cpp
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $(EXEC).cpp -o $(EXEC)

clean:
	rm $(EXEC)

.PHONY: clean

