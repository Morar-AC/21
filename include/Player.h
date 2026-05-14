#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include <string>
#include "pachet.h"

class Player {
protected:
    std::vector<int>carti;
    std::vector<std::string>trump;
public:
    virtual ~Player();
    void add(int c);
    int getsum();
    void remove();
    void reset() ;
    std::vector<int>&listacards();
    std::vector<std::string>& listatrumps();
    
    virtual bool decizie(pachet& d, int& lim, Player* opp) = 0;
};


#endif
