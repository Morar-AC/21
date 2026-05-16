#include "Bot.h"



bool Bot::decizie(pachet& d, int& lim, Player* opp,Game* joc) {
    if(getsum() < lim - 3) {
        add(d.draw());
        int ind = d.gennr(1,5);
        

        return false;
    }
    return true;
}
