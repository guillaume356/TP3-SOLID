#include <iostream>
#include <windows.h>
#include "Player.h"
#include "Morpion.h"
#include "Puissance4.h"
#include "Grille.h"

int main()
{
    //Creation des joueurs
    const Player Player1{ 'X',"Joueur 1" };
    const Player Player2{ 'O',"Joueur 2" };

    bool EnregistrementVictory = false;
    bool Egalite = false;


    int MenuChoix = 0;

    do
    {

        std::cout << "MENU :" << std::endl;
        std::cout << "1 - Morpion " << std::endl;
        std::cout << "2 - Puissance 4" << std::endl;
        std::cin >> MenuChoix;
        //Morpion
        if (MenuChoix == 1)
        {
            Grille grille(3, 3);
            Morpion MorpionGame(grille);
            // Vérifie si un joueur a gagné ou s'il y a égalité
            MorpionGame.Initialisation(grille);
            system("CLS");
            std::cout << "=======================================" << std::endl;
            std::cout << "Morpion : " << std::endl;
            std::cout << "=======================================" << std::endl;
            do
            {
                MorpionGame.Afficher(grille);
                std::cout << std::endl << "Tour du joueur : " << Player1.GetNomDuJoueur() << "(" << Player1.GetPionDuJoueur() << ")" << std::endl;
                //Tour J1
                grille = MorpionGame.Remplir(Player1, grille);
                MorpionGame.Afficher(grille);
                EnregistrementVictory = MorpionGame.Victoire(grille);
                if (EnregistrementVictory == false)
                    Egalite = MorpionGame.Egalite(grille);
                //Tour J2
                if (!EnregistrementVictory && !Egalite)
                {
                    std::cout << std::endl << "Tour du joueur : " << Player2.GetNomDuJoueur() << "(" << Player2.GetPionDuJoueur() << ")" << std::endl;
                    grille = MorpionGame.Remplir(Player2, grille);
                    EnregistrementVictory = MorpionGame.Victoire(grille);
                    if (EnregistrementVictory == false)
                        Egalite = MorpionGame.Egalite(grille);
                }

                //Restart une partie
                if (EnregistrementVictory == true || Egalite == true)
                {
                    std::cout << "Voulez-vous recommencer ? (1 Pour recommencer | 2 Pour quitter)" << std::endl;
                    int retry;
                    std::cin >> retry;
                    if (retry == 1)
                    {
                        MorpionGame.Initialisation(grille);
                        continue;
                    }
                    else
                        break;
                }

            } while (true);

            

            Sleep(2000);
            system("CLS");
        }
        //Puissance 4
        else if (MenuChoix == 2)
        {
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
            Sleep(2000);
            system("CLS");
        }
    } while (true);
}
