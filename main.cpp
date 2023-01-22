//
// Created by anybod on 2023.01.21..
//

#include <iostream>
#include "Mines/Mines.h"
#include "Random/Random.h"

int main(void) {

    std::cout << "Hello, World!" << std::endl;
    Mines mines;
    mines.init(5, 5, 5);
    mines.makeNewGrid();
    mines.printGrid();

    return 0;
}