#pragma once
#include <iostream>
class Player
{
private:
    char PionDuJoueur;
    std::string NomDuJoueur;

public:

    inline char GetPionDuJoueur() const
    {
        return this->PionDuJoueur;
    }

    inline std::string GetNomDuJoueur() const
    {
        return this->NomDuJoueur;
    }

    Player(char PionDuJoueur, std::string NomDuJoueur);
};