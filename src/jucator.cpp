#include "jucator.h"
#include <iostream>
#include <thread>
#include <chrono>

bool jucator :: decizie(pachet& d, int& lim, Player* opp) {
    while(true) {
        std::cout << "apasa 1 ca sa tragi, 2 ca sa stai sau 3 ca sa folosesti un trump card\n";
        int op; 
        std::cin >> op;
        
        if(op == 1) {
            int c = d.draw();
            add(c);
               

            int ind = d.gennr(1, 5);
            std::string t;
            if(ind == 1) { t = "pf";
              
                std::cout << "Ai primit un card de perfect draw\n"; 
                
                }
            else if(ind == 2) { 
                t = "rm"; 
                std::cout << "Ai primit un card de remove\n"; 
            
            }
            else if(ind == 3) {
                 t = "rmp";
                 std::cout << "Ai primit un card de remove propriu\n";
                
                }
            else if(ind == 4) { 
                t = "rst"; 
                std::cout << "Ai primit un card de reset\n"; 
            }
            else { t = "27"; 
                std::cout << "Ai primit un card de limita pana la 27\n"; 
            }
            trump.push_back(t);
            std::this_thread::sleep_for(std::chrono::milliseconds(3000));
            return false;
      
      
        }
        if(op == 2) return true;
        if(op == 3) {

            for(int i=0; i<trump.size(); ++i) 
            std::cout << i << " " << trump[i] << "\n";
            
            std::cout << "alege un trump card\n";
            int op1; 
            std::cin >> op1;
            if(op1 >= 0 && op1 < trump.size()) {
                std::string f = trump[op1];
                trump.erase(trump.begin() + op1);
                if(f == "pf") add(d.drawperfect(getsum(), lim));
                else if(f == "27") 
                lim = 27;
                else if(f == "rm") 
                opp->remove();
                else if(f == "rmp") 
                remove();
                else reset();
            }
            return false;
        }
   
   
    }

}
