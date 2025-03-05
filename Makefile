# Compiler and flags
CC = g++
CFLAGS = -Wall -Wextra -std=c++17
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)
TARGET = main

# Default build rule
all: $(TARGET)

# Linking step
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compilation step
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJS) $(TARGET)

# CodeQL database create rule
codeql-create:
	codeql database create codeql-db --language=cpp --command="make clean && make"

# CodeQL analysis rule
codeql-analyze:
	codeql database analyze codeql-db codeql/cpp-queries --format=sarif-latest --output=results.sarif

# Phony targets (avoids conflicts with actual files)
.PHONY: all clean codeql-create codeql-analyze
