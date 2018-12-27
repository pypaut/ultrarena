CC = gcc
CFLAGS = `pkg-config --cflags --libs sdl2` -Wall -Werror -Wextra -pedantic -std=c99 -Isrc/include -I/usr/include/sdl
OBJS = src/main.c


all:
	$(CC) $(CFLAGS) $(OBJS) -o game


check:
	./tests/testsuit.sh


clean:
	$(RM) $(OBJS) game


.PHONY: all clean
