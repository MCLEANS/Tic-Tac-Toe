CC= g++
OBJS= main.o tictactoe.o
CFLAGS= -c -Wall
LFLAGS= -Wall


all : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o  tictactoe
tictactoe.o : tictactoe.cpp tictactoe.h
	$(CC) $(CFLAGS) tictactoe.cpp
main.o : main.cpp tictactoe.h
	$(CC) $(CFLAGS) main.cpp
clean:
	rm *.o tictactoe
run:
	./tictactoe
debug :
	g++ -g main.o tictactoe.o -o output
