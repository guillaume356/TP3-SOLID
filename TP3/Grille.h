#ifndef GRILLE_H
#define GRILLE_H
#include <vector>
using namespace std;

class Grille {
public:
    Grille() {};
    Grille(int xGridSize, int yGridSize);

    int getNbRows() { return nbRows; }
    int getNbColumns() { return nbColumns; }
    vector<vector<int>> getGrid() { return grid; }
    vector<vector<int>> grid;
private:
    int nbRows;
    int nbColumns;

};
#endif //Grid_H
