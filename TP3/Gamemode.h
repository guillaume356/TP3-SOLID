#pragma once
#include "Grille.h"
#include "Player.h"

class Gamemode
{
public:
	virtual void Initialisation(Grille grille);
	virtual void Afficher(Grille grille);


};
