#include "board.cpp"


int main(){
    board b;
    int i=3;
    while (i--)
    {
        b.display_board();
        int x,y;
        char c;
        cin>>x>>y>>c;
        b.update_board(x,y,c);
        if(b.Is_winner()){
            b.display_board();
            cout<<"win"<<endl;
        }
    }
    
}
