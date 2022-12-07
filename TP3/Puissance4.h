#pragma once
#include <iostream>
#include "Player.h"
#include "Grille.h"
#include "Gamemode.h"
#include "EndGame.h"
class Puissance4 : public Gamemode, public EndGame
{
public:

	Puissance4(Grille grille);
	Grille Remplir(Player P, Grille grille) const;
	Puissance4();

private:
	
	Grille grille;
};