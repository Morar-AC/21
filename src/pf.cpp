#include "pf.h"
#include<vector>

void pf::ceface(Game* elem)
   {
      pachet& pachet1 = elem->getpk();
      Player* jucator = elem->getp1();
      int lim1 = elem->limita();

               
       int card = 0;
     
        int suma = jucator->getsum();
        card = pachet1.drawperfect(suma,lim1);
     if(card){
       jucator->add(card);
       
       

     }
        
            
   }
