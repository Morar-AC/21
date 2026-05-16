#include "pachet.h"

pachet::pachet():gen(time(0)) {
    for(int i = 1;i<=11;++i) 
    deck.push_back(i);
}

int pachet::gennr(int st, int dr) {
    std::uniform_int_distribution<int>dist(st, dr);
    return dist(gen);
}
int pachet::sz(){

   return (int)deck.size();

}
void pachet::add(int c)
{
    deck.push_back(c);

}
void pachet:: del(int val)
{
     for(auto it = deck.begin();it!=deck.end();it++)
     {
         if(*it == val)
         {
            deck.erase(it);
            return;
         }
     }
 
}
int pachet::draw() {
    if(deck.empty()) 
    return 0;
   
   
    int ind = gennr(0,deck.size()-1);
    int val = deck[ind];
    
    deck.erase(deck.begin() + ind);
    
    
    
    return val;
}

int pachet::drawperfect(int curr,int l) {
    int kk = -1;
    for(size_t j = 0; j <deck.size();++j) {
        if(deck[j] + curr <= l) 
        kk = j;
    }
    if(kk != -1) {
        int val = deck[kk];
        deck.erase(deck.begin() + kk);
        return val;
    }
    else return 0;
}