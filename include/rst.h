#ifndef RST_H
#define RST_H
#include "tcards.h"

class rst : public tcards{


    public:
       rst():tcards("Acest card iti reseteaza deckul!", "Ai primit un trump card de reset!\n",1){}
      void ceface(Game *opp) override;
     

};







#endif