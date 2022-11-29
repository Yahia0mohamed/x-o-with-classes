#ifndef PLAYER_HPP
#define PLAYER_HPP

#include"board.hpp"

// the player class
class player{
    private:
        int order;
        string name;
        char symbol;
        board* b_con;
    public:
        player(string n,char s);
        player(int o,char s);
        void get_move(int x,int y);
        string info();
        char get_symbol();

};

#endif