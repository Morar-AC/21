#include "tcards.h"



tcards::tcards(std::string n1,std::string m1)
{
  this->nume = n1;
  this->msg = m1;

}
std::string tcards::getnume()
{
  return nume;

}

tcards::~tcards(){}