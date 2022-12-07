#include "Puissance4.h"


Puissance4::Puissance4()
{
}


Puissance4::Puissance4(Grille grille) {
	this->grille = grille;
}



Grille Puissance4::Remplir(Player P, Grille grille)
{
	bool Remplis = false;
	bool Saisie = false;
	int Colonne;
	do
	{
		do
		{
			std::cout << "Colonne ?";
			std::cin >> Colonne;
			if (Colonne >= 1 && Colonne <= grille.getNbColumns())
				Saisie = true;
			else
				std::cout << "Erreur lors de la saisie, le nombre doit etre entre 1 et 7" << std::endl;
		} while (Saisie == false);
		Colonne = Colonne -1;
		if (grille.grid[Colonne][0] != 0)
		{
			std::cout << "Colonne complete !" << std::endl;
			Remplis = false;
		}
		else
		{
			for (int Ligne = grille.getNbRows() - 1; Ligne >= 0; Ligne--) // Start from the bottom of the column
			{
				if (grille.grid[Colonne][Ligne] == 0 && Remplis == false)
				{
					if (P.GetPionDuJoueur() == 'X') {
						grille.grid[Colonne][Ligne] = 1; // Fill in the first empty spot with the player's token
					}
					if (P.GetPionDuJoueur() == 'O') {
						grille.grid[Colonne][Ligne] = 2; // Fill in the first empty spot with the player's token
					}
					Remplis = true;
				}
			}
		}
	} while (Remplis == false);
	return grille;
}



