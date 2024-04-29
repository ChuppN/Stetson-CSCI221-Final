# Compiler
CC = g++

# Compiler flags
CFLAGS = -std=c++11 -Wall

# Source files
SRCS = main.cpp

# Header files
HDRS = Node.h LinkedList.h

# Object files
OBJS = $(SRCS:.cpp=.o)

# Target executable
TARGET = myprogram

# Rule to build the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

# Rule to compile source files
%.o: %.cpp $(HDRS)
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to clean up the project
clean:
	rm -f $(OBJS) $(TARGET)
	
