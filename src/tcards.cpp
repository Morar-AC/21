#include "tcards.h"



tcards::tcards(const std::string& n1, const std::string& m1) {
    nume = n1;
    msg = m1;
}


const std::string& tcards::getnume() const {
    return nume;
}

tcards::~tcards(){}