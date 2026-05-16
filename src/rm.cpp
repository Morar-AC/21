#include "rm.h"
#include<vector>

void rm::ceface(Game* elem)
   {
      pachet& pachet1 = elem->getpk();
      Player* bot = elem->getbot();
     
      std::vector<int>&manabot = bot->listacards();

        
    int last = manabot[manabot.size()-1];
       pachet1.add(last);
       bot->popbeck();

        
            
   }
