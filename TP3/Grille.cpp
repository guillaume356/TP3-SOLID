#include "Grille.h"
#include <iostream>

Grille::Grille(int xGridSize, int yGridSize) {
    nbRows = xGridSize;
    nbColumns = yGridSize;

    std::vector<std::vector<int>> rowsVector;

    for (int row = 0; row < yGridSize; row++)
    {
        std::vector<int> colsVector;
        for (int col = 0; col < xGridSize; col++)
        {
            colsVector.push_back(0);
        }
        rowsVector.push_back(colsVector);
    }

    this->grid = rowsVector;
}

