#include "Joueur.h"
#include <string>
#include <list>
#include <iostream>

using namespace std;


Joueur::Joueur() //Constructeur
{
	nom = new string;
	prenom = new string;
	ville_naissance = new string;
	taille = new float;
	poids = new float;
	parcours_joueur = new vector<Parcours>;
}

void Joueur::SetJoueur(Joueur* joueur)
{
	printf("Veuillez entrer le prenom du joueur: ");
	scanf("%s", *joueur->nom);
	printf("Entrez le nom du joueur: ");
	scanf("%s", *joueur->nom);
	printf("Entrez la ville de naissance du joueur: ");
	scanf("%s", *joueur->ville_naissance);
	printf("Entrez la taille en cm du joueur: ");
	scanf("%f", *joueur->taille);
	printf("Entrez le poids en kg du joueur: ");
	scanf("%f", *joueur->poids);
	printf("Entrez le parcours du joueur: ");
	scanf("%Parcours", *joueur->parcours_joueur);

	return;
}

void Joueur::AfficherJoueur(Joueur)
{
	cout << this->prenom << this->nom << endl;

	return;
}

Joueur::~Joueur()	//Destructeur
{
	delete nom;
	delete prenom;
	delete ville_naissance;
	delete taille;
	delete poids;
	delete parcours_joueur;
}