#ifndef GAMEMANEGER_HPP
#define GAMEMANEGER_HPP

#include"player.hpp"

//the game maneger class
class GameManeger{
    private:
        player *p1;
        player *p2;
    public:
        GameManeger();
        void run();
};

#endif