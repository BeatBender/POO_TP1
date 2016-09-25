#include <string>
#include <vector>
#include "Parcours.h"

class Joueur
{
public:
	Joueur();
	void SetJoueur(Joueur*);
	void AfficherJoueur(Joueur);
	~Joueur();

private:
	std::string *nom, *prenom, *ville_naissance;
	float *taille, *poids;
	std::vector<Parcours> *parcours_joueur;
};