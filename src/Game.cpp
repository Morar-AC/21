#include "Game.h"
#include "Renderer.h"
#include <iostream>
#include <thread>
#include <chrono>
#include "jucator.h"
#include "Bot.h"

Game::Game() : lim(21) {
    p1 = new jucator();
    bot = new Bot();
}

Game::~Game() { 
    delete p1; delete bot;
 }

void Game::play() {
   
   
   
    p1->add(d.draw());
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    bot->add(d.draw());
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    p1->add(d.draw());
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    bot->add(d.draw());





    bool stay1 = 0,stay2 = 0;
    while(!stay1 || !stay2) {
     stay1 = stay2 = 0;

        Renderer::curatare();
        std::cout << "pachetul tau\n";
        Renderer::afisHand(p1->listacards(), 0);
        std::cout << "\npachet oponent\n";
        Renderer::afisHand(bot->listacards(), 1);

        if(!stay1)
         stay1 = p1->decizie(d, lim, bot);
        if(!stay2)
         stay2 = bot->decizie(d, lim, p1);
        if(d.sz() == 0) {
             stay1 = stay2 = 1; 
            }
    }


     Renderer::curatare();
    Renderer::afisHand(p1->listacards(), 0);
        std::cout << "\npachet oponent\n";
        Renderer::afisHand(bot->listacards(), 0);





    
    int sc1 = p1->getsum(), sc2 = bot->getsum();
    if(sc1 == sc2) 
    std::cout << "EGAL\n";
    else if((sc1 > sc2 && sc1 <= lim) || (sc2 > lim && sc1 <= lim))
     std::cout << "AI CASTIGAT!\n";
    else std::cout << "AI PIERDUT!\n";



}
