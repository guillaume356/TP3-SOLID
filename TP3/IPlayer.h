#include <iostream>

class IPlayer
{
public:
    // Constructeur avec deux paramètres pour initialiser les membres de l'objet
    IPlayer(char pionDuJoueur, std::string nomDuJoueur)
        : PionDuJoueur(pionDuJoueur), NomDuJoueur(nomDuJoueur)
    {
    }

    // Constructeur par défaut
    IPlayer() : PionDuJoueur('X'), NomDuJoueur("Joueur")
    {
    }

    // Méthode pour récupérer le pion du joueur
    char GetPionDuJoueur() const
    {
        return this->PionDuJoueur;
    }

    // Méthode pour récupérer le nom du joueur
    std::string GetNomDuJoueur() const
    {
        return this->NomDuJoueur;
    }

private:
    char PionDuJoueur;
    std::string NomDuJoueur;
};