#pragma once

#include "Puissance4.h"
#include "Player.h"
class Puissance4Game : public Puissance4
{
public:
	void Deroulement() const;
	Puissance4Game(Player P1, Player P2);

	Player getPlayer1() { return Player1; }
	Player getPlayer2() { return Player2; }
private:
	Player Player1;
	Player Player2;

};

