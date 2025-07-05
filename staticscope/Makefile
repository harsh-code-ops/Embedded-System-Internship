# Makefile for main.c and math.c

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c11

# Target executable name
TARGET = program

# Source files
SRCS = main.c math.c

# Object files (auto-generated)
OBJS = $(SRCS:.c=.o)

# Default rule: build the program
all: $(TARGET)

# Link object files into executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Clean up generated files
clean:
	rm -f $(TARGET) $(OBJS)
