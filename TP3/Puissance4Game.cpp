#include "Puissance4Game.h"
#include "IPlayer.h"

void Puissance4Game::Deroulement()
{
    bool EnregistrementVictory = false;
    bool Egalite = false;
    Grille grille4(4, 7);
                Puissance4 Puissance4Game(grille4);
                Puissance4Game.Initialisation(grille4);
    
    
                //Puissance4Game.Initialisation(grille4);
                system("CLS");
                std::cout << "=======================================" << std::endl;
                std::cout << "Puissance 4 : " << std::endl;
                std::cout << "=======================================" << std::endl;
                do {
                    Puissance4Game.Afficher(grille4);
                    std::cout << std::endl << "Tour du joueur : " << Player1.GetNomDuJoueur() << "(" << Player1.GetPionDuJoueur() << ")" << std::endl;
                    grille4 = Puissance4Game.Remplir(Player1, grille4);
                    Puissance4Game.Afficher(grille4);
                    EnregistrementVictory = Puissance4Game.Victoire(grille4);
                    if (EnregistrementVictory == false)
                    {
                        std::cout << std::endl << "Tour du joueur : " << Player2.GetNomDuJoueur() << "(" << Player2.GetNomDuJoueur() << ")" << std::endl;
                        grille4 = Puissance4Game.Remplir(Player2,grille4);
                        EnregistrementVictory = Puissance4Game.Victoire(grille4);   
                    }
                } while (EnregistrementVictory == false);
                system("CLS");
}

Puissance4Game::Puissance4Game(Player P1, Player P2)
{
    Player1 = P1;
    Player2 = P2;

}