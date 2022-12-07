#include "EndGame.h"
#include "Gamemode.h"

#include "Morpion.h"



bool EndGame::Victoire(Grille grille1)
{
	// V�rifier les lignes
	for (int i = 0; i < grille1.getNbColumns(); i++)
	{
		bool victoireLigne = true;
		for (int j = 1; j < grille1.getNbRows(); j++)
		{
			if (grille1.grid[i][0] != grille1.grid[i][j])
			{
				victoireLigne = false;
				break;
			}
		}
		if (victoireLigne && grille1.grid[i][0] != 0)
		{
			cout << "Victoire d'un joueur" << endl;
			return true;
		}
	}

	// V�rifier les colonnes
	for (int i = 0; i < grille1.getNbRows(); i++)
	{
		bool victoireColonne = true;
		for (int j = 1; j < grille1.getNbColumns(); j++)
		{
			if (grille1.grid[0][i] != grille1.grid[j][i])
			{
				victoireColonne = false;
				break;
			}
		}
		if (victoireColonne && grille1.grid[0][i] != 0)
		{
			cout << "Victoire d'un joueur" << endl;
			return true;
		}
	}

	// V�rifier la diagonale principale
	bool victoireDiagonalePrincipale = true;
	for (int i = 1; i < grille1.getNbRows(); i++)
	{
		if (grille1.grid[0][0] != grille1.grid[i][i])
		{
			victoireDiagonalePrincipale = false;
			break;
		}
	}
	if (victoireDiagonalePrincipale && grille1.grid[0][0] != 0)
	{
		cout << "Victoire d'un joueur" << endl;
		return true;
	}

	// V�rifier la diagonale secondaire
	bool victoireDiagonaleSecondaire = true;
	for (int i = 1; i < grille1.getNbRows(); i++)
	{
		if (grille1.grid[grille1.getNbRows() - 1][0] != grille1.grid[grille1.getNbRows() - 1 - i][i])
		{
			victoireDiagonaleSecondaire = false;
			break;
		}
	}
	if (victoireDiagonaleSecondaire && grille1.grid[grille1.getNbRows() - 1][0] != 0)
	{
		cout << "Victoire d'un joueur" << endl;
		return true;
	}

	return false;
}



bool EndGame::Egalite(Grille grille1)
{
	// Egalit�
	int compteur = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (grille1.grid[i][j] != 0)
			{
				compteur++;
			}
		}
	}
	if (compteur == grille1.getNbColumns() * grille1.getNbRows())
	{
		cout << "Egalite" << std::endl;
		return true;
	}
	return false;
}

