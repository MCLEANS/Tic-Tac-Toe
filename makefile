tictactoe : main.o tictactoe.o
	g++ main.o tictactoe.o -o tictactoe

tictactoe.o : tictactoe.cpp tictactoe.h
	g++ -c -Wall tictactoe.cpp
main.o : main.cpp tictactoe.h
	g++ -c -Wall main.cpp
clean:
	rm *.o tictactoe
debug :
	g++ -g main.o tictactoe.o -o output
