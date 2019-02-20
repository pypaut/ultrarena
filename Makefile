CC = g++
CXXFLAGS = -Wall -Werror -Wextra -pedantic -std=c++17 -Isrc/include
LIBS = -lSDL2
OBJS = src/main.cc \
       src/Game.cc


all:
	$(CC) $(CXXFLAGS) $(OBJS) -o ultrarena $(LIBS)


check:
	./tests/testsuit.sh


clean:
	$(RM) $(OBJS) ultrarena


.PHONY: all clean
