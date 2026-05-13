#ifndef PIZZA_H
#define PIZZA_H

#include "Produs.h"
#include<string>


class Pizza: public Produs{

    double sansared;


      public:
      Pizza();
      Pizza(std::string nume);

       ~Pizza();

      

       void afisare() override;


};
#endif