#pragma once
#include <iostream>
#include "Player.h"
#include "Grille.h"
#include "Gamemode.h"
#include "EndGame.h"

class Morpion : public Gamemode, public EndGame
{
public:
	//Constructeur 
	Morpion(Grille grille);
	Morpion();

	Grille Remplir(Player P, Grille grille1) const;
	Grille RemplirBot(Grille grille) const;

private:
	
	Grille grille;

};
