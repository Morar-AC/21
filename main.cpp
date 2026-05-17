#include "Game.h"
#include <iostream>

int main() {
    std::cout << "bine ai venit\noptiuni:\nApasa 1 ca sa joci sau altcv ca sa iesi\n";
    int op; std::cin >> op;
    if(op == 1) {
        Game g;
        g.play();
    }
    return 0;
}