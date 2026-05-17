#ifndef TCARDS_H
#define TCARDS_H
#include <string>
#include "Game.h"


class Game;


class tcards{


      protected:
        std::string nume;
        std::string msg;
        int valoare;

      
         public:
     tcards(const std::string& n1, const std::string& m1, int val1);
     
      virtual ~tcards();
        virtual void ceface(Game* elem) = 0;
   const std::string& getnume() const;
         int getvaloare() const;


     

};

std::ostream& operator<<(std::ostream& os, const tcards& card);
bool operator<(const tcards& c1, const tcards& c2);



#endif