#include "EndGame.h"
#include "Morpion.h"
#include <Windows.h>

bool  EndGame::Victoire(Grille grille1, int ConditionVictoire) const
{
	// Vérifier les lignes
	int testCompteurLigne = 0;
	for (int i = 0; i < grille1.getNbRows(); i++)
	{
		for (int j = 0; j <= grille1.getNbColumns() - ConditionVictoire; j++)
		{
			for (int k = 0; k < ConditionVictoire; k++)
			{
				if (grille1.grid[i][j] == grille1.grid[i][j + k] && grille1.grid[i][j + k] != 0)
				{
					testCompteurLigne++;
					if (testCompteurLigne == ConditionVictoire)
					{

						std::cout << "Victoire Vrai";
						Sleep(3000);
						return true;
					}
				}
				else
					testCompteurLigne = 0;
			}
		}
	}

	// Vérifier les lignes
	int testCompteurColonne = 0;
	for (int i = 0; i <= grille1.getNbRows() - ConditionVictoire; i++)
	{
		for (int j = 0; j < grille1.getNbColumns(); j++)
		{
			for (int k = 0; k < ConditionVictoire; k++)
			{
				if (grille1.grid[i][j] == grille1.grid[i + k][j] && grille1.grid[i + k][j] != 0)
				{
					testCompteurColonne++;
					if (testCompteurColonne == ConditionVictoire)
					{

						std::cout << "Victoire Vrai";
						Sleep(3000);
						return true;
					}
				}
				else
					testCompteurColonne = 0;
			}
		}
	}

	int testCompteurDiag1 = 0;
	// Vérifier la diagonale principale
	for (int i = 0; i <= grille1.getNbRows() - ConditionVictoire; i++)
	{
		for (int j = 0; j <= grille1.getNbColumns() - ConditionVictoire; j++)
		{
			for (int k = 0; k < ConditionVictoire; k++)
			{
				if (grille1.grid[i][j] == grille1.grid[i + k][j + k] && grille1.grid[i + k][j + k] != 0)
				{
					testCompteurDiag1++;
					if (testCompteurDiag1 == ConditionVictoire)
					{

						std::cout << "Victoire Vrai";
						Sleep(3000);
						return true;
					}
				}
				else
					testCompteurDiag1 = 0;
			}
		}
	}

	////NE MARCHE PAS : 
	//// 
	//// 
	////int testCompteurDiag2 = 0;
	////// Vérifier la diagonale principale
	////for (int i = grille1.getNbRows(); i >= ConditionVictoire; i--)
	////{
	////	for (int j = 0; j <= grille1.getNbColumns() - ConditionVictoire; j++)
	////	{
	////		for (int k = 0; k < ConditionVictoire; k++)
	////		{
	////			if (grille1.grid[i][j] == grille1.grid[i-k][j+k] && grille1.grid[i][j] != 0)
	////			{
	////				std::cout << "TEST";
	////			}
	////		}
	////	}
	////}
	return false;
}



bool  EndGame::Egalite(Grille grille1) const
{
	// Egalité
	int compteur = 0;
	for (int i = 0; i < grille1.getNbRows(); i++)
	{
		for (int j = 0; j < grille1.getNbColumns(); j++)
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