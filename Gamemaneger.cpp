#include"Gamemaneger.hpp"

void GameManeger::run(){
    int c1,x,y;
    char z1;
    cout<<"enter ur order:";
    cin>>c1;
    cout<<"enter ur character:";
    cin>>z1;
    player p1(c1,z1);
    system("cls");
//---------------------------------//data for the players
    cout<<"enter ur order:";
    cin>>c1;
    cout<<"enter ur character:";
    cin>>z1;
    player p2(c1,z1);
    board b;
    system("cls");
//---------------------------------------------//game loop
    while (true){
        b.display_board();
        p1.get_move(x,y);
        b.update_board(x,y,p1.get_symbol());
        b.display_board();
//------------------------------------------------------//getting the moves
        if(b.Is_winner(p1.get_symbol())){
            cout<<"WINNER!!!!!"<<endl;
            cout<<p1.info();
            return;
        }else if (b.Is_winner(p2.get_symbol())){
            cout<<"WINNER!!!!!"<<endl;
            cout<<p2.info();
            return;
        }else if (b.Is_draw(p1.get_symbol(),p2.get_symbol())){
            cout<<"DRAW!!!!!!"<<endl;
            return;
        }
//--------------------------------------------------------------------
        p2.get_move(x,y);
        b.update_board(x,y,p2.get_symbol());
//--------------------------------------------------------------------
        if(b.Is_winner(p1.get_symbol())){
            cout<<"WINNER!!!!!"<<endl;
            cout<<p1.info();
            return;
        }else if (b.Is_winner(p2.get_symbol())){
            cout<<"WINNER!!!!!"<<endl;
            cout<<p2.info();
            return;
        }else if (b.Is_draw(p1.get_symbol(),p2.get_symbol())){
            cout<<"DRAW!!!!!!"<<endl;
            return;
        }
    }
    
}