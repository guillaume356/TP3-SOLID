#pragma once
#include "Grille.h"
#include "Player.h"
class EndGame
{
public:
    virtual bool Victoire(Grille grille1, int ConditionVictoire) const;
    virtual bool Egalite(Grille grille1) const;
};