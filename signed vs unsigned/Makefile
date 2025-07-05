# Makefile to build signed_vs_unsigned

CC = gcc
CFLAGS = -Wall -Wextra -std=c11

TARGET = signed_vs_unsigned
SRC = signed_vs_unsigned.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
