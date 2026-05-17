#ifndef GAME_H
#define GAME_H
#include "Player.h"
#include "pachet.h"
#include "istoric.h"
#include <string>
class Player;


class Game {
private:
    Player *p1, *bot;
    pachet d;
    int lim;
    
    istoric<int> istoricnr;
    istoric<std::string> istoricdetalii;
public:
    Game();
    ~Game();
    Game(const Game&) = delete;
    Game& operator=(const Game&) = delete;
    void play();
  
    int limita();
    Player* getp1();
    pachet& getpk();
    Player* getbot();
     void setlimnou();
     

};
#endif