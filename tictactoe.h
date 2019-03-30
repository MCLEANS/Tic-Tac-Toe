#ifndef TICTACTOE_H_INCLUDED
#define TICTACTOE_H_INCLUDED

#include <iostream>

using namespace std;



class Game{
private:
    bool played1=false;

    bool played2=false;
    bool gameWon=false;


public:
    int moves1=0;
    int moves2=0;
    char board[3][3]={};
    void plotBoard();
    void play1(int a,int b);
    void play2(int a,int b);
    int getPlayer();
    bool checkwin();

protected:



};

#endif // TICTACTOE_H_INCLUDED
