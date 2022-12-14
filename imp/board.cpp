#include "board.hpp"

board::board(){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Board[i][j]='0';
        }
        
    }
    
    n_moves=0;
}

void board::display_board(){
    for (int i = 0; i < 3; i++)
    {
        cout<<"|";
        for (int j = 0; j < 3; j++)
        {
            cout<<Board[i][j]<<"|";
        }
        cout<<endl;
    }
}

bool board::update_board(int x,int y,char s){
    if((x>=0 && x<=2)&&(y>=0 && y<=2)){
        Board[x][y]=s;
        n_moves++;
        return true;
    }
    return false;
}

bool board::Is_winner(char symbol){
    int counter;
    char c=symbol;
    for (int i = 0; i < 3; i++){
        counter=0;
        for (int j = 0; j < 3; j++)
        {
            if(Board[i][j]==c){
                counter++;
            }
        }
        if(counter==3){
            return true;
        }
    }
    for (int i = 0; i < 3; i++){
        counter=0;
        for (int j = 0; j < 3; j++)
        {
            if(Board[j][i]==c){
                counter++;
            }
        }
        if(counter==3){
            return true;
        }
    }
    if(Board[0][0]==c && Board[1][1]==c && Board[2][2]==c){
    return true;
    }
    if (Board[0][2]==c && Board[1][1]==c && Board[2][0]==c){
        return true;
    }
    return false;
}

bool board::Is_draw(char s1,char s2){
    if(n_moves==9 && !Is_winner(s1) && !Is_winner(s2)){
        return true;
    }
    return false;
}