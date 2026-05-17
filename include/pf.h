#ifndef PF_H
#define PF_H
#include "tcards.h"

class pf : public tcards{


    public:
      
   pf():tcards("Acest card iti permite sa tragi cea mai buna carte din pachet daca exista!", "Ai primit un trump card de perfect draw!\n",3) {} 
    
   void ceface(Game* opp) override;

};




#endif