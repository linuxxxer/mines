//
// Created by anybod on 2023.01.21..
//

#ifndef MINES_RANDOM_H
#define MINES_RANDOM_H

#include <cstdlib>
#include "time.h"
class Random {
private:
    static bool checkIfContains(int* numbers, int size, int what);
public:
    static int randomNumber(int max);
    static void getRandomNumbers(int howMany, int max, int*& numbers);
};


#endif //MINES_RANDOM_H
