#ifndef DRINK_H
#define DRINK_H

#include "Produs.h"
#include<string>


class Drink: public Produs{

    double sansaspil;


      public:
      Drink();
       Drink(std::string nume);

         ~Drink();

      

       void afisare() override;


};
#endif