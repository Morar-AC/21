#include  "Renderer.h"
#include  <iostream>

const std::vector<std::vector<std::string>> Renderer::digits = {
    { " ### ", " # # ", " # # ", " # # ", " ### " }, // 0
    { "  #  ", " ##  ", "  #  ", "  #  ", " ### " }, // 1
    { " ### ", "    #", " ### ", "#    ", " ### " }, // 2
    { " ### ", "    #", " ### ", "    #", " ### " }, // 3
    { " #  #", " #  #", " ####", "    #", "    #" }, // 4
    { " ####", " #   ", " ### ", "    #", " ####" }, // 5
    { " ####", " #   ", " ####", " #  #", " ####" }, // 6
    { " ####", "    #", "   # ", "  #  ", " #   " }, // 7
    { " ### ", " #  #", " ### ", " #  #", " ### " }, // 8
    { " ####", " #  #", " ####", "    #", " ####" }, // 9
    { " #  ### ", " # #   #", " # #   #", " # #   #", " #  ### " }, // 10
    { " #  # ", " #  # ", " #  # ", " #  # ", " #  # " }, // 11
    { " ### ", "   # ", "  ## ", "     ", "  #  " }  // ?
};

void Renderer::curatare() {
    for(int i = 1; i <= 100; ++i) std::cout << '\n';
}

void Renderer::afisHand(const std::vector<int>& numbers, bool hidden) {
    for (size_t i = 0; i < numbers.size(); ++i) {
        int val = (hidden && i > 0) ? 12 : numbers[i];
        std::cout << "+" << std::string(digits[val][0].length(), '-') << "+  ";
    }
    std::cout << "\n";
    for (int line = 0; line < 5; ++line) {
        for (size_t i = 0; i < numbers.size(); ++i) {
            int val = (hidden && i > 0) ? 12 : numbers[i];
            std::cout << "|" << digits[val][line] << "|  ";
        }
        std::cout << "\n";
    }
    for (size_t i = 0; i < numbers.size(); ++i) {
        int val = (hidden && i > 0) ? 12 : numbers[i];
        std::cout << "+" << std::string(digits[val][0].length(), '-') << "+  ";
    }
    std::cout << "\n";
}
