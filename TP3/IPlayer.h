#include <iostream>

class IPlayer
{
public:
    // Constructeur avec deux param�tres pour initialiser les membres de l'objet
    IPlayer(char pionDuJoueur, std::string nomDuJoueur)
        : PionDuJoueur(pionDuJoueur), NomDuJoueur(nomDuJoueur)
    {
    }

    // Constructeur par d�faut
    IPlayer() : PionDuJoueur('X'), NomDuJoueur("Joueur")
    {
    }

    // M�thode pour r�cup�rer le pion du joueur
    char GetPionDuJoueur() const
    {
        return this->PionDuJoueur;
    }

    // M�thode pour r�cup�rer le nom du joueur
    std::string GetNomDuJoueur() const
    {
        return this->NomDuJoueur;
    }

private:
    char PionDuJoueur;
    std::string NomDuJoueur;
};