#ifndef BOARD_HPP
#define BOARD_HPP

#include<bits/stdc++.h>
using namespace std;

// the board class
class board{
    private:
        char Board[3][3];
        int n_moves;
    public:
        board();
        bool update_board(int x,int y,char s);
        bool Is_winner(char symbol);
        bool Is_draw(char s1,char s2);
        void display_board();
};

#endif