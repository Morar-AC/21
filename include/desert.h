#ifndef DESERT_H
#define DESERT_H

#include "Produs.h"
#include<string>


class Desert: public Produs{

    double sansarevenire;

     public:     
         Desert();
         Desert(std::string nume);
         ~Desert(); 
        void afisare() override;





};
#endif