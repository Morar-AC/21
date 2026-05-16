#ifndef JUCATOR_H
#define JUCATOR_H
#include "Player.h"

class jucator : public Player {
public:
    bool decizie(pachet& d, int& lim, Player* opp,Game* joc) override;
};


#endif