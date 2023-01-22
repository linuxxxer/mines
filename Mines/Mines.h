//
// Created by anybod on 2023.01.21..
//

#ifndef MINES_MINES_H
#define MINES_MINES_H

#include "../Random/Random.h"


class Mines {
private:
    int** grid;
    int height;
    int width;
    int mines;

public:
    Mines();
    ~Mines();
    int init(int height, int width, int mines);
    int makeNewGrid();
    void printGrid();
    int howManyMinesAround();

};


#endif //MINES_MINES_H
