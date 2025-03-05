# Compiler
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# Source files
SRCS = $(wildcard *.c)  # Find all .c files
OBJS = $(SRCS:.c=.o)
TARGET = main

# Default rule
all: $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compile .c files to .o object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean

