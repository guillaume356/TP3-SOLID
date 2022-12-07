#pragma once
#include "Grille.h"
#include "Player.h"

class Gamemode
{
public:
	
	virtual void Initialisation(Grille grille) const;
	virtual void Afficher(Grille grille) const;


};
