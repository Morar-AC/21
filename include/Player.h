#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include <string>
#include "pachet.h"
#include "tcards.h"

class Game;
class tcards;
class pachet;


class Player {
protected:
    std::vector<int>carti;
    std::vector< tcards* >trump;
public:
    virtual ~Player();
    int getsum();
    std::vector<int>&listacards();
     void add(int val);
    void popbeck();
        [[maybe_unused]] void reset();


    virtual bool decizie(pachet& d, Player* opp,Game* joc) = 0;
};


#endif