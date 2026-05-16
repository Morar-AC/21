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
        tcards(std::string nm1,std::string m1);
         virtual ~tcards();
        virtual void ceface(Game* elem) = 0;
    std::string getnume();
         


     

};





#endif