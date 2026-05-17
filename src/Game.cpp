#include "Game.h"
#include "Renderer.h"
#include <iostream>
#include <thread>
#include "exceptiondeck.h"
#include <chrono>
#include "jucator.h"
#include "Bot.h"


int Game::lim = 21;

Game::Game()  {
    p1 = new jucator();
    bot = new Bot();

std::cout << "Alege un nume!\n ";
         std::cin >> (*p1);
          std::cout << "Good luck! >:)  " << p1->getnume() << "\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

}
void Game::setlimnou(){

     lim = 27;
     

}
Game::~Game() { 
    delete p1; delete bot;
 }
Player* Game::getp1(){

      return p1;

}
pachet& Game::getpk()
{

  return d;

}
int Game::limita()
{
    return lim;


}
Player*Game::getbot()
{
   return bot;
   

}

void Game::play() {
   
  
   int cnt = 0;
   while(true){
   
    p1->listacards().clear();
        bot->listacards().clear();
     

         for( int i = 1;i<=11;++i)
           {
                if(d.exista(i) == false)
                    d.add(i);
                      
           }


        p1->add(d.draw());
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    bot->add(d.draw());
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    p1->add(d.draw());
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    bot->add(d.draw());







   cnt++;
   istoricnr.addistoric(cnt);

try{
    bool stay1 = 0,stay2 = 0;
    while(!stay1 || !stay2) {
     stay2 = 0;

        Renderer::curatare();
         std::cout << "Pachetul lui " + p1->getnume() + "\n";
        Renderer::afisHand(p1->listacards(), 0);
       std::cout << "Pachet oponent\n";
        Renderer::afisHand(bot->listacards(), 1);

       
         stay1 = p1->decizie(d, bot,this);

 Renderer::curatare();
        std::cout << "Pachetul lui " + p1->getnume() + "\n";
        Renderer::afisHand(p1->listacards(), 0);
        std::cout << "Pachet oponent\n";
        Renderer::afisHand(bot->listacards(), 1);
         std::this_thread::sleep_for(std::chrono::milliseconds(500));

       
         stay2 = bot->decizie(d, p1,this);
       if(d.sz() == 0) {
      throw exceptiondeck("Pachetul de carti e gol!");
}
    }
}
catch (const exceptiondeck& e) {
            std::cout << "Ce pacat! " << e.what() << "\n";
            std::this_thread::sleep_for(std::chrono::milliseconds(1500));
        } 
     Renderer::curatare();
      std::cout << "Pachetul lui " + p1->getnume() + "\n";
    Renderer::afisHand(p1->listacards(), 0);
        std::cout << "Pachet oponent\n";
        Renderer::afisHand(bot->listacards(), 0);


  
    


    
    int sc1 = p1->getsum(), sc2 = bot->getsum();
    if(sc1 == sc2) {
      std::cout << "EGAL\n";
      istoricdetalii.addistoric("A fost egaliate");

    }
    else if((sc1 > sc2 && sc1 <= lim) || (sc2 > lim && sc1 <= lim)){
     std::cout << "AI CASTIGAT!\n";
      istoricdetalii.addistoric( p1->getnume() + " a castigat cu scor de " + std::to_string(p1->getsum()));
    }
    else{ std::cout << "AI PIERDUT!\n";

       istoricdetalii.addistoric("Botul a castigat cu scor de " + std::to_string(bot->getsum()));
    }
    
    std::cout << "Mai vrei sa joci o runda? Apasa 1 pentru da 0 pentru nu.\n";
    int val;
    std::cin >> val;
    if(val != 1)
      break;
     



}

   std::cout << "Detalii meci:\n";

    const auto& listanr = istoricnr.getLista();
    const auto& listatext = istoricdetalii.getLista();

    auto it1 = listanr.begin();
    auto it2 = listatext.begin();

    while (it1!= listanr.end()&&it2!=listatext.end()) {

        std::cout << "Runda " << *it1 << " : " << *it2 << "\n";
        it1++;
        it2++;
    }


}