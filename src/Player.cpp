#include "Player.h"



Player::~Player()
{
   for(tcards* k : trump)
   delete k;

   trump.clear();
   

}
Player::Player(const Player& other) {
    this->carti = other.carti; 
    this->trump = other.trump;
}
int Player::getsum() {
    int s = 0;
    for(int c : carti) s += c;
    return s;
}

void Player::popbeck(){

       carti.pop_back();
       
   
}
std::vector<int>&Player::listacards()
{
      return carti;

}

void Player::add(int val)
{
         carti.push_back(val);

}
const std::string& Player::getnume() const {
    return nume;
}
void Player::setnume(const std::string&n )
{
      nume = n;

}
std::istream& operator>>(std::istream& is, Player& p) {
    std::string nume1;
    
   
    is >> nume1; 
    
    
    p.setnume(nume1); 
    

    return is; 
}
Player& Player::operator=(const Player& other) {
   
    if (this == &other) {
        return *this;
    }

   
    this->carti = other.carti;
    this->trump = other.trump;

    return *this;
}