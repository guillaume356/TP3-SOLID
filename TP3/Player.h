#pragma once
#include <iostream>
class Player
{
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

    Player();
    
private:
    char PionDuJoueur;
    std::string NomDuJoueur;


};