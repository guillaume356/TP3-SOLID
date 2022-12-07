#pragma once
#include "Morpion.h"
#include "Player.h"

class MorpionGame : public Morpion
{
public:
	void Deroulement();
	MorpionGame(Player P1, Player P2);

	Player getPlayer1() { return Player1; }
	Player getPlayer2() { return Player2; }
private:
	Player Player1;
	Player Player2;
};
