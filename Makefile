CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = gen

all: $(TARGET)

$(TARGET): gen.o 
	$(CC) $(CFLAGS) -g $^ -g -o $@

gen.o: gen.c
	$(CC) $(CFLAGS) -g -c $< -g -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean
