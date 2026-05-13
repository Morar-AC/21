#include "Pizza.h"
#include<string>
#include<iostream>


Pizza::Pizza():Produs("margherita",20)
{

}



Pizza::Pizza(std::string nume) : Produs(nume,0)
{
     
     if(nume == "margherita")
     {
           this->pret = 20 ;
         
     }
      else if(nume == "prosciutto")
       {
        this->pret = 22 ;

       }
       else if(nume == "diavola")
       {
      this->pret = 40 ;
       }

}

Pizza::~Pizza()
{
}

void Pizza::afisare()
{
      std::cout << "Pizza " << nume << "care costa " << pret  << " de lei" << "\n";

   
}