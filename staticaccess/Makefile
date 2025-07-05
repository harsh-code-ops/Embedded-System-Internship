# Makefile

CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = program
SRCS = main.c app.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(TARGET) $(OBJS)
