#ifndef RM_H
#define RM_H
#include "tcards.h"

class rm : public tcards{


    public:
     rm():tcards("Acest card iti permite sa pui in pachet ultima carte trasa de oponent!", "Ai primit un trump card de remove!\n",5) {} 
    void ceface(Game *opp) override;

};







#endif