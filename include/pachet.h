#ifndef PACHET_H
#define PACHET_H
#include <vector>
#include <random>
#include <ctime>

class pachet {
private:
    std::vector<int>deck;
    std::mt19937 gen;
public:
    pachet();
    int gennr(int st, int dr);
    int draw();
    int drawperfect(int curr, int l);
    int sz();
     void add(int c);
        void del(int val);
        
      

};
#endif