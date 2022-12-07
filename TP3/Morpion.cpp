#include "Morpion.h"


Morpion::Morpion(Grille grille) {
	this->grille = grille;
}

Morpion::Morpion() {

}


Grille Morpion::Remplir(Player P, Grille grille1)
{
	bool Remplis = false;
	bool Saisie = false;
	int Ligne, Colonne;
	do
	{
		do
		{
			std::cout << "Ligne ?";
			std::cin >> Ligne;
			std::cout << "Colonne ?";
			std::cin >> Colonne;
			if (Ligne >= 1 && Ligne <= 3 && Colonne >= 1 && Colonne <= 3)
				Saisie = true;
			else
				std::cout << "Erreur lors de la saisie, le nombre doit etre entre 1 et 3" << std::endl;
		} while (Saisie == false);
		Colonne = Colonne - 1;
		Ligne = Ligne - 1;
		if (grille1.grid[Ligne][Colonne] != 0)
		{
			std::cout << "L'emplacement a deja ete pris !" << std::endl;
			Remplis = false;
		}
		else
		{
			if (P.GetPionDuJoueur() == 'X') {
				grille1.grid[Ligne][Colonne] = 1;

			}
			else if (P.GetPionDuJoueur() == 'O') {
				grille1.grid[Ligne][Colonne] = 2;

			}
			Remplis = true;
		}
	} while (Remplis == false);

	return grille1;

}

Grille Morpion::RemplirBot(Grille grille)
{
	bool Remplis = false;
	int RandomColumn;
	int RandomRow;

	do
	{
		RandomColumn = (rand() % 3);
		RandomRow = (rand() % 3);
		if (grille.grid[RandomColumn][RandomRow] != 0)
		{
			std::cout << "L'ordinateur est pas doue ! " << std::endl;
		}
		else if (grille.grid[RandomColumn][RandomRow] == 0)
		{
			std::cout << "L'ordinateur a remplis une case" << std::endl;
			grille.grid[RandomColumn][RandomRow] = 2;
			Remplis = true;
		}
	} while (Remplis == false);

	return grille;
}

