#include <iostream>
#include <windows.h>
#include "Player.h"
#include "Morpion.h"
#include "MorpionGame.h"
#include "Puissance4Game.h"
#include "Puissance4.h"
#include "Grille.h"

int main()
{
    //Creation des joueurs
    const Player Player1{ 'X',"Joueur 1" };
    const Player Player2{ 'O',"Joueur 2" };
    int MenuChoix = 0;
    do
    {               
        //Menu 
        std::cout << "MENU :" << std::endl;
        std::cout << "1 - Morpion " << std::endl;
        std::cout << "2 - Puissance 4" << std::endl;
        std::cin >> MenuChoix;

        //Morpion
        if (MenuChoix == 1)
        {
            MorpionGame JeuxDeMorpion(Player1, Player2);
            JeuxDeMorpion.Deroulement();
        }
        //P4
        else if (MenuChoix == 2)
        {
            Puissance4Game JeuxDePuissance4(Player1, Player2);
            JeuxDePuissance4.Deroulement();
            //Appeler Puissance 4
        }
    } while (true);
}
