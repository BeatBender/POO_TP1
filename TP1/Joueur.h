#include <string>
#include <list>
#include "Parcours.h"

class Joueur
{
public:
	Joueur();
	~Joueur();

private:
	std::string nom, prenom, ville_naissance;
	float taille, poids;
	std::list<Parcours> parcours_joueur;
};