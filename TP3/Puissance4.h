#pragma once
#include <iostream>
#include "Player.h"
#include "Grille.h"
#include "Gamemode.h"
class Puissance4 : public Gamemode
{
public:

	Puissance4(Grille grille);
	Grille Remplir(Player P, Grille grille);
	Puissance4();

private:
	
	Grille grille;
};