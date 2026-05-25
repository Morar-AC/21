#include "Bot.h"



bool Bot::decizie(pachet& d, Player* opp,Game* joc) {
   
   (void)opp;
    int val = joc->limita();
    
    
    if(getsum() < val - 3) {
        add(d.draw());
        return false;

    }
    return true;
}