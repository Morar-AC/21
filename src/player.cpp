#include "Player.h"



Player::~Player()
{
   

}
int Player::getsum() {
    int s = 0;
    for(int c : carti) s += c;
    return s;
}
void Player::add(int c)
  {
    carti.push_back(c);
  }
void Player::remove()
{
    carti.pop_back();
}
void Player::reset()
{
    carti.clear();
}
std::vector<int>&Player::listacards()
{
      return carti;

}
std::vector<std::string>&Player::listatrumps()
{
      return trump;

}