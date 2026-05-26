#include "jucator.h"
#include <iostream>
#include <thread>
#include <chrono>
#include"pf.h"
#include"rm.h"
#include"rmp.h"
#include"rst.h"
#include"limita27.h"
#include<algorithm>



bool jucator :: decizie(pachet& d, Player* opp,Game* joc) {
    (void)opp;
    
    while(true) {
        std::cout << "apasa 1 ca sa tragi, 2 ca sa stai sau 3 ca sa folosesti un trump card\n";
        int op; 
        std::cin >> op;
        
        if(op == 1 ) {
          
         
          
            int c = d.draw();
            add(c);
               

            int ind = d.gennr(1, 5);
           
            if(ind == 1) { 
               trump.push_back(new pf());

                std::cout << "Ai primit un card de perfect draw\n"; 
                
                }
            else if(ind == 2) { 
               trump.push_back(new rm());
                std::cout << "Ai primit un card de remove\n"; 
            
            }
            else if(ind == 3) {
                trump.push_back(new rmp());
                 std::cout << "Ai primit un card de remove propriu\n";
                
                }
            else if(ind == 4) { 
                  trump.push_back(new rst());
                std::cout << "Ai primit un card de reset\n"; 
            }
            else { 
                 trump.push_back(new limita27());
                std::cout << "Ai primit un card de limita pana la 27\n"; 
            }
            
            std::this_thread::sleep_for(std::chrono::milliseconds(3000));
        
            return false;
        
      
        }
        if(op == 2) return true;
        if(op == 3) {
std::sort(trump.begin(), trump.end(),[](const tcards* c1,const tcards *c2)
{
    return *c1 < *c2;

});
  
         for(size_t i = 0; i < trump.size(); ++i) {
        std::cout << i << " " << *(trump[i]) << "\n"; 
}
            std::cout << "alege un trump card\n";
            int op1; 
            std::cin >> op1;
           if(op1 >= 0 && op1 < static_cast<int>(trump.size())) {
                
             tcards* card1 = trump[op1];
             trump.erase(trump.begin() + op1);
             card1->ceface(joc);
             delete card1;
             


            }
            return false;
        }
   
   
    }

}