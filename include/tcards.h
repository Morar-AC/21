#ifndef TCARDS_H
#define TCARDS_H
#include <string>
#include "Game.h"


class Game;


class tcards{


      protected:
        std::string nume;
        std::string msg;

      
         public:
      tcards(const std::string& n1, const std::string& m1);
         virtual ~tcards();
        virtual void ceface(Game* elem) = 0;
   const std::string& getnume() const;
         


     

};





#endif