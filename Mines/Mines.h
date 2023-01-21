//
// Created by anybod on 2023.01.21..
//

#ifndef MINES_MINES_H
#define MINES_MINES_H


class Mines {
private:
    int* grid;
    int height;
    int width;


public:
    int init(int height, int width);
    int makeNewGrid(int height, int width);


};


#endif //MINES_MINES_H
