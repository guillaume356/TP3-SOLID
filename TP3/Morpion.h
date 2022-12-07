#pragma once
#include <iostream>
#include "Player.h"
#include "Grille.h"
#include "Gamemode.h"

class Morpion : public Gamemode
{
public:
	//Constructeur 
	Morpion(Grille grille);
	Morpion();
	Grille Remplir(Player P, Grille grille);
	Grille RemplirBot(Grille grille);

private:
	
	Grille grille;

};
