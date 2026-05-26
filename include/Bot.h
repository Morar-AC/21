#ifndef BOT_H
#define BOT_H
#include "Player.h"


class Bot : public Player {
public:
    bool decizie(pachet& d,Game* joc) override;
};
#endif