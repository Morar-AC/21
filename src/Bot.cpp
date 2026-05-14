#include "Bot.h"



bool Bot::decizie(pachet& d, int& lim, Player* opp) {
    if(getsum() < lim - 5) {
        add(d.draw());
        int ind = d.gennr(1,5);
        
   std::string t;
         if(ind == 1)
         t = "pf";
         else if(ind == 2)
         {
        t = "27";

         }
         else if(ind ==3)
         {
            t = "rm";
         }
         else if(ind == 4)
         {
            t = "rmp";
         }
         else if(ind == 5)
         {
            t = "rst";
         }



        trump.push_back(t);

        return false;
    }
    return true;
}
