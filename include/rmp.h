#ifndef RMP_H
#define RMP_H
#include "tcards.h"

class rmp : public tcards{


    public:
     rmp():tcards("Acesta card iti permite sa pui ultima carte trasa in pachet!", "Ai primit un trump card de remove propriu!\n") {}
    void ceface(Game*opp) override;
       
 
 
 

};







#endif