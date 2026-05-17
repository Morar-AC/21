#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include <string>
#include "pachet.h"
#include "tcards.h"

class Game;
class tcards;
class pachet;


class Player {
protected:
    std::vector<int>carti;
    std::vector< tcards* >trump;
    std::string nume;

public:
Player() = default;

    virtual ~Player();
    int getsum();
    std::vector<int>&listacards();
  
     void add(int val);
    void popbeck();
       const std::string& getnume() const;
       void setnume(const std::string& n);
Player(const Player& other);
Player& operator=(const Player& other);

    virtual bool decizie(pachet& d, Player* opp,Game* joc) = 0;
};
std::istream& operator>>(std::istream& is, Player& p);

#endif