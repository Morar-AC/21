#include "tcards.h"



tcards::tcards(const std::string& n1, const std::string& m1, int val1) 
    : nume(n1), msg(m1), valoare(val1) 
{
    
}
const std::string& tcards::getnume() const {
    return nume;
}

tcards::~tcards(){}

std::ostream& operator<<(std::ostream& os, const tcards& card) {
    os << card.getnume();
    return os;
}
int tcards::getvaloare() const
{
    return valoare;

}
bool operator<(const tcards& c1, const tcards& c2) {
   
    return c1.getvaloare() < c2.getvaloare(); 
}