#include <string>
#include <vector>
#include "Parcours.h"

class Joueur
{
public:
	Joueur();
	void SetJoueur(Joueur*);		//Entre les informations d'un joueur
	void AfficherJoueur(Joueur);	//Affiche le prénom et le nom d'un joueur
	~Joueur();

private:
	std::string *nom, *prenom, *ville_naissance;
	float *taille, *poids;
	std::vector<Parcours> *parcours_joueur;	//Vecteur de parcours d'un joueur
};