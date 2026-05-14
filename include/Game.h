#ifndef GAME_H
#define GAME_H
#include "Player.h"
#include "pachet.h"

class Game {
private:
    Player *p1, *bot;
    pachet d;
    int lim;
public:
    Game();
    ~Game();
    void play();
};
#endif