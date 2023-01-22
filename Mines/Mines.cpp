//
// Created by anybod on 2023.01.21..
//

#include "Mines.h"
#include <iostream>

Mines::Mines() {
    std::cout << "Constructor called" << std::endl;
}

Mines::~Mines() {
    std::cout << "Destructor called" << std::endl;
    delete[] this->grid;
}


int Mines::init(int height, int width, int mines) {
    this->height = height;
    this->width = width;
    this->mines = mines;
    return 0;
}

int Mines::makeNewGrid() {
//    let's assume it's X by X not X by Y
    std::cout << "Here" << std::endl;
    if (this->height <= 0 || this->width <= 0)
        return -1;
    this->grid = new int*[this->height];
    for (int i = 0; i < this->height; i++) {
        this->grid[i] = new int[this->width];
    }
    std::cout << "Grid made" << std::endl;
    int* position;
    position = new int[2];
    for (int i = 0; i < this->mines; i++) {
        Random::getRandomNumbers(2, 5, position);
        if (grid[position[0]][position[1]] != -1)
            grid[position[0]][position[1]] = -1;
        else
            i--;
    }
    std::cout << "Mines distributed" << std::endl;
    for (int i = 0; i < this->height; i++) {
        for (int j = 0; j < this->width; j++) {
//            We don't want to count for the bomb - isn't necessary
            if (this->grid[i][j] == -1)
                continue;
            for (int k = i - 1; k <= i + 1; k++) {
                for (int l = j - 1; j <= j + 1; j++) {
//                    Check if we are running out of bounds
                    if (k < 0 || l < 0 || k >= this->height || l >= this->width)
                        continue;
                    if (this->grid[k][l] == -1) {
                        this->grid[i][j]++;
                    }
                }
            }
            std::cout << "Grid set" << std::endl;

            /*
             * -1 -1
             * -1 0
             * -1 1
             * 0 -1
             * 0 1
             * 1 -1
             * 1 0
             * 1 1
             */
        }
    }

    return 0;
}

int Mines::howManyMinesAround() {
    return 0;
}

void Mines::printGrid() {
//    Debug function
    for (int i = 0; i < this->height; i++) {
        for (int j = 0; j < this->width; j++) {
            std::cout << this->grid[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}