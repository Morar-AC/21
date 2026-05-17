#include "exceptiondeck.h"


exceptiondeck::exceptiondeck(const std::string& msg) : mesaj(msg) {}

exceptiondeck::~exceptiondeck() noexcept {}

const char* exceptiondeck::what() const noexcept 
{
    return mesaj.c_str();
}