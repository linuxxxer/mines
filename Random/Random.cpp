//
// Created by anybod on 2023.01.21..
//

#include "Random.h"
#include <iostream>

int Random::randomNumber(int max) {
    srand(time(0));
    return rand() % max;
}

void Random::getRandomNumbers(int howMany, int max, int*& numbers) {
    srand(time(0));
//    numbers = new int[howMany];
    int i = 0;
    for (;;) {
        int num = rand() % max;
        if (!checkIfContains(numbers, howMany, num)) {
            numbers[i] = num;
            i++;
        }
        if (i == howMany)
            break;
    }
}

bool Random::checkIfContains(int *numbers, int size, int what) {
    for (int i = 0; i < size; ++i) {
        if (numbers[i] == what)
            return true;
    }
    return false;
}
