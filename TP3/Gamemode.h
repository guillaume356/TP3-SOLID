#pragma once
#include "Grille.h"
#include "Player.h"

class Gamemode
{
public:
	virtual void Initialisation(Grille grille);
	virtual void Afficher(Grille grille);
	bool Victoire(Grille grille1);
	bool Egalite(Grille grille1);

};
