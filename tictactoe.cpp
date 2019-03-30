#include "tictactoe.h"
//This makes the player 1 moves
void Game::play1(int a,int b){
    moves1++;
    board[a-1][b-1]='O';
    played1=false;
    played2=true;
}

//This makes the player 2 moves
void Game::play2(int a,int b){
    moves2++;
   board[a-1][b-1]='X';
   played1=true;
   played2=false;
}
//This function checks the board after every move made and decides if there is a winner
//if a winner is present then it announces the winner and ends the game
bool Game::checkwin(){
    if(board[0][0]==board[0][1] && board[0][0]==board[0][2] && board[0][0]!=NULL){ if(!played1) {cout<<" \n Player 1 winner"<<endl; gameWon=true;} else if(!played2){cout<<" \n Player 2 winner"<<endl; gameWon=true; }}
    if(board[1][0]==board[1][1] && board[1][0]==board[1][2] && board[1][0]!=NULL){ if(!played1) {cout<<" \n Player 1 winner"<<endl; gameWon=true;} else if(!played2){cout<<" \n Player 2 winner"<<endl; gameWon=true; }}
    if(board[2][0]==board[2][1] && board[2][0]==board[2][2] && board[2][0]!=NULL){ if(!played1) {cout<<" \n Player 1 winner"<<endl; gameWon=true;} else if(!played2){cout<<" \n Player 2 winner"<<endl; gameWon=true;}}

    if(board[0][0]==board[1][0] && board[0][0]==board[2][0] && board[0][0]!=NULL){ if (!played1) {cout<<" \n Player 1 winner"<<endl; gameWon=true;} else if(!played2){cout<<" \n Player 2 winner"<<endl; gameWon=true;}}
    if(board[0][1]==board[1][1] && board[0][1]==board[2][1] && board[0][1]!=NULL){ if(!played1) {cout<<" \n Player 1 winner"<<endl; gameWon=true;} else if(!played2){cout<<" \n Player 2 winner"<<endl; gameWon=true; }}
    if(board[0][2]==board[1][2] && board[0][2]==board[2][2] && board[0][2]!=NULL){ if(!played1) {cout<<" \n Player 1 winner"<<endl; gameWon=true;} else if(!played2){cout<<" \n Player 2 winner"<<endl;  gameWon=true;}}

    if(board[0][0]==board[1][1] && board[0][0]==board[2][2] && board[0][0]!=NULL){ if(!played1) {cout<<" \n Player 1 winner"<<endl; gameWon=true;} else if(!played2){cout<<" \n Player 2 winner"<<endl; gameWon=true;}}
    if(board[0][2]==board[2][0] && board[0][2]==board[1][1]&& board[0][2]!=NULL){ if(!played1) {cout<<" \n Player 1 winner"<<endl; gameWon=true;} else if(!played2){cout<<" \n Player 2 winner"<<endl; gameWon=true;}}

    if(gameWon){
        cout<<"------------------------------------"<<endl;
        cout<<"-----------SCORE--------------------"<<endl;
        cout<<"|  Player 1: "<<moves1<<endl;
        cout<<"|  Player 2: "<<moves2<<endl;
        cout<<"------------------------------------"<<endl;
        return true;
    }
    else{
        return false;
    }

}
//this function plots game board at its current status
void Game::plotBoard(){
      for(int i=0;i<3;i++){
            cout<<"|";
            for(int j=0;j<3;j++){
                cout<<" "<<board[i][j]<<" |"<<flush;
            }
            cout<<endl;
        }
}
//This function helps to get the player who just made the most recent move
int Game::getPlayer(){
    int x=1;
    int y=2;
    if(played1==true) return x;
    else if(played2==true) return y;

}
