#include "Gamemode.h"

#include "Morpion.h"


void Gamemode::Afficher(Grille grille1) const
{
	for (int i = 0; i < grille1.getNbColumns(); i++)
	{
		for (int j = 0; j < grille1.getNbRows(); j++)
		{
			if (grille1.grid[i][j] == 0)
			{
				std::cout << "-";
			}
			else
			{
				if (grille1.grid[i][j] == 1)
				{
					std::cout << "X";
				}
				else
				{
					std::cout << "O";
				}
			}

			if (j == grille1.getNbRows() - 1)
			{
				std::cout << std::endl;
			}
			else
			{
				std::cout << " | ";
			}
		}
	}
}


void Gamemode::Initialisation(Grille grille1) const
{
	for (int i = 0; i < grille1.getNbColumns(); i++)
	{
		for (int j = 0; j < grille1.getNbRows(); j++)
		{
			grille1.grid[i][j] = 0;
		}
	}
}



