#include "MorpionGame.h"

void MorpionGame::Deroulement()
{
    bool EnregistrementVictory = false;
    bool Egalite = false;
    int Robot = 0;
    Grille grille(3, 3);
    Morpion MorpionGame(grille);
    MorpionGame.Initialisation(grille);
    system("CLS");
    std::cout << "=======================================" << std::endl;
    std::cout << "Morpion : " << std::endl;
    std::cout << "=======================================" << std::endl;
    std::cout << "Si vous voulez jouer contre un robot, tapez 1" << std::endl;
    std::cout << "Si vous voulez jouer contre un autre joueur, tapez 2" << std::endl;
    std::cin >> Robot;
    std::cout << std::endl;
    if (Robot == 1)
    {
        do
        {
            //Tour J1
            MorpionGame.Afficher(grille);
            std::cout << std::endl << "Tour du joueur : " << Player1.GetNomDuJoueur() << "(" << Player1.GetPionDuJoueur() << ")" << std::endl;
            grille = MorpionGame.Remplir(Player1, grille);
            MorpionGame.Afficher(grille);
            EnregistrementVictory = MorpionGame.Victoire(grille);
            if (EnregistrementVictory == false)
                Egalite = MorpionGame.Egalite(grille);
            if (!EnregistrementVictory && !Egalite)
            {
                std::cout << std::endl << "Tour de l'ordinateur : " << std::endl;
                grille = MorpionGame.RemplirBot(grille);
                EnregistrementVictory = MorpionGame.Victoire(grille);
                if (EnregistrementVictory == false)
                    Egalite = MorpionGame.Egalite(grille);
            }
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
        system("CLS");
    }
    else if (Robot == 2)
    {
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
        system("CLS");
    }
}

MorpionGame::MorpionGame(Player P1, Player P2)
{
    Player1 = P1;
    Player2 = P2;

}