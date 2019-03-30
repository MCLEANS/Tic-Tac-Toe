
#include "tictactoe.h"
#include <fstream>

Game game;

int main(){
        bool win=false;
        system("touch data.csv");
        std::ofstream myfile;
        myfile.open("data.csv");
        myfile<<"Tic Tac Toe Game stats \n";
        myfile<<"X Position,Y Position,Player,Winner \n";
        cout<<"################################################################"<<endl;
        cout<<"####################### TIC TAC TOE ############################"<<endl;
        cout<<"#########                             BY: JACK MCLEANS #########"<<endl;
        cout<<"################################################################"<<endl;
        cout<<"\n \n \n";



        game.plotBoard();
        cout<<"\n";

        int posx;
        int posy;
        cout<<"Player 1: Enter your 'O' location: "<<flush;
        cin>>posx;
        cout<<"\t";
        cin>>posy;
        cout<<"\n";
        while(posy<1 || posx<1||posy>3 || posx>3){
            cout<<"Invalid Location "<<endl;
            cout<<"Player 1: Enter your 'O' location: "<<flush;
            cin>>posx;
            cout<<"\t";
            cin>>posy;
            cout<<"\n";

         }
        game.play1(posx,posy);
        myfile<<posx;
        myfile<<",";
        myfile<<posy;
        myfile<<",";
        myfile<<1;
        myfile<<"\n";
        game.plotBoard();

    while(1){

    int player=game.getPlayer();
    cout<<"\n";
    cout<<player<<"st Player"<<endl;
    if(player==1){
        int xpos;
        int ypos;
        cout<<"Player 1: Enter your 'O' location: "<<flush;
        cin>>xpos;
        cout<<"\t";
        cin>>ypos;
        cout<<"\n";
         while(ypos<1 || xpos<1||ypos>3 || xpos>3){
            cout<<"Invalid Location "<<endl;
            cout<<"Player 1: Enter your 'O' location: "<<flush;
            cin>>xpos;
            cout<<"\t";
            cin>>ypos;
            cout<<"\n";

         }
        myfile<<xpos;
        myfile<<",";
        myfile<<ypos;
        myfile<<",";
        myfile<<1;
        myfile<<"\n";
        game.play1(xpos,ypos);

        }
    if(player==2){
        int xpos;
        int ypos;
        cout<<"Player 2: Enter your 'X' location: "<<flush;
        cin>>xpos;
        cout<<"\t";
        cin>>ypos;
        cout<<"\n";
         while(ypos<1 || xpos<1||ypos>3 || xpos>3){
            cout<<"Invalid Location "<<endl;
            cout<<"Player 2: Enter your 'X' location: "<<flush;
            cin>>xpos;
            cout<<"\t";
            cin>>ypos;
            cout<<"\n";

         }
        myfile<<xpos;
        myfile<<",";
        myfile<<ypos;
        myfile<<",";
        myfile<<2;
        myfile<<"\n";
         game.play2(xpos,ypos);
    }

    if((game.moves1+game.moves2)==9){
        cout<<"Game Ends in a tie"<<endl;
    }

    game.plotBoard();
    win=game.checkwin();
    if(win){
        myfile.clear();
        break;
    }
     cout<<"\n";
    }
    return 0;
}
