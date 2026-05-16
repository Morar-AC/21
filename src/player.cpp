#include "Player.h"



Player::~Player()
{
   for(tcards* k : trump)
   delete k;

   trump.clear();
   

}
int Player::getsum() {
    int s = 0;
    for(int c : carti) s += c;
    return s;
}
void Player::reset()
{
     carti.clear();
     
  
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