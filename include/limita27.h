#ifndef LIMITA27_H
#define LIMITA27_H
#include "tcards.h"

class limita27 : public tcards{


    public:
      
   limita27():tcards("Acest card iti permite sa joci pana la 27!", "Ai primit un trump card de 27!\n") {} 
    
   void ceface(Game* opp) override;

};




#endif