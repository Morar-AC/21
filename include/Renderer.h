#ifndef RENDERER_H
#define RENDERER_H
#include <vector>
#include <string>

class Renderer {
private:
    static const std::vector<std::vector<std::string>> digits;
public:
    static void curatare();
    static void afisHand(const std::vector<int>& numbers, bool hidden);
};
#endif
