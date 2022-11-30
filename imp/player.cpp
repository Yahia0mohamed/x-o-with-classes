#include"player.hpp"

player::player(char s){
    symbol=s;
}

player::player(int o,char s){
    name="player"+to_string(o);
    symbol=s;
}

char player::get_symbol(){
    return symbol;
}

string player::info(){
    return name+" \nsymbol is:"+symbol;
}

void player::get_move(int &x,int &y){
    cout<<"enter ur move: ";
    cin>>x >>y;
    if ((x<=2 && x>=0)&&(y<=2 && y>=0)){
        return;
    }
    else{
        cout<<"wrong entries"<<endl;
        get_move(x,y);
    }
}