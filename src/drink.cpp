#include "Drink.h"
#include<string>
#include<iostream>

Drink::Drink():Produs("apa",10)
{


}
Drink::Drink(std::string):Produs(nume,0)
{
     if(nume == "apa")
       this->pret = 10;
       else if(nume == "soda")
       this->pret = 15;
       else if(nume == "shake")
         this->pret = 20;


}
Drink::~Drink(){}

void Drink::afisare()
{
   
      std::cout << "Bautura tip " << nume << "care costa " << pret<< " de lei\n";  

}



