# Makefile for the simple sequential threads program

# Define the C compiler to use
CC = gcc

CFLAGS = -Wall -Wextra -std=c99 -g


LDFLAGS = -lpthread

# Define the name of the source file
SRC = simple_sequential_threads.c

# Define the name of the executable file to be created
TARGET = simple_sequential_threads

# The default goal of this Makefile.
# 'all' is a conventional name for the primary target.
all: $(TARGET)


$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)
	@echo "Executable '$(TARGET)' created successfully."

# Rule to clean up the directory.
# 'clean' is a conventional target to remove generated files.
clean:
	rm -f $(TARGET)
	@echo "Cleaned up the directory."

# Phony targets are targets that are not actual files.
# This tells 'make' that 'all' and 'clean' are just commands to be executed.
.PHONY: all clean
