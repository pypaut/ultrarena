CC = gcc
CFLAGS = `pkg-config --cflags --libs sdl2` -Wall -Werror -Wextra -pedantic -std=c99 -Isrc/include
OBJS = src/main.c \
       src/misc/init.c \
       src/events/handle_event.c \
       src/misc/free_all.c


all:
	$(CC) $(CFLAGS) $(OBJS) -o ultrarena


check:
	./tests/testsuit.sh


clean:
	$(RM) $(OBJS) ultrarena


.PHONY: all clean
