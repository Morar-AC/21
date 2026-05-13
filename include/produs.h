#ifndef PRODUS_H
#define PRODUS_H
#include<string>

class Produs{

   protected:
    std::string nume;
   double pret;

     public:

       
     Produs(std::string,double pret);
     virtual ~Produs();

     virtual void afisare() = 0;

    

};

#endif