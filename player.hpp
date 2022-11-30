#ifndef PLAYER_HPP
#define PLAYER_HPP

#include"board.hpp"

// the player class
class player{
    private:
        string name;
        char symbol;
    public:
        player(char s);
        player(int o,char s);
        void get_move(int &x,int &y);
        string info();
        char get_symbol();

};

#endif