#include "rmp.h"
#include<vector>

void rmp::ceface(Game* elem)
   {
     Player* jucator= elem->getp1();
     pachet& pa = elem->getpk();

   std::vector<int>&manajoc = jucator->listacards();

   int last = manajoc[manajoc.size()-1];
            manajoc.pop_back();
    
          pa.add(last);
          

           
   }