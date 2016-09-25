#include "Joueur.h"
#include <string>
#include <list>
#include <iostream>

using namespace std;

/*ostream& operator<<(ostream& os, const Joueur& j)
{
	cout << j;
	return os;
}*/


Joueur::Joueur()
{
	nom = new string;
	prenom = new string;
	ville_naissance = new string;
	taille = new float;
	poids = new float;
	parcours_joueur = new vector<Parcours>;
}

void Joueur::CreerJoueur()
{

}

void Joueur::AfficherJoueur(Joueur)
{
	cout << this->prenom << this->nom << endl;
}

Joueur::~Joueur()
{
	delete nom;
	delete prenom;
	delete ville_naissance;
	delete taille;
	delete poids;
	delete parcours_joueur;
}