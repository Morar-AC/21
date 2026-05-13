#include "Desert.h"
#include<string>
#include<iostream>

Desert::Desert():Produs("tort",20)
{
  
}
Desert::Desert(std::string nume):Produs(nume,0)
{
        if(nume == "tort")
             this->pret = 20;
             else if(nume == "pie")
             this->pret = 35;
             else if(nume == "fursec")
             this->pret = 50;
}


Desert::~Desert(){

}
void Desert::afisare()
{

    std::cout << "Desert " << nume << "care costa " << pret << " de lei";


}
