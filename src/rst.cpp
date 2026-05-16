#include "rst.h"
#include<vector>

void rst::ceface(Game* elem)
   {
      pachet& pachet1 = elem->getpk();
      Player* jucator = elem->getp1();
      std::vector<int>&mana =  jucator->listacards();
      for(auto i : mana){
        pachet1.add(i);
      }
        mana.clear();

           
        
       jucator->add(pachet1.draw());
       jucator->add(pachet1.draw());



        
            
   }