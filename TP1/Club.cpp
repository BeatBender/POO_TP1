#include "Club.h"
#include "Joueur.h"
#include "Entraineur.h"
#include <vector>
#include <iostream>

using namespace std;


Club::Club()
{
	nom = new string;
	histoire = new string;
	couleur = new string;
	ville = new string;
	annee_creation = new Date();
	palmares = new Palmares;
	stade_du_club = new Stade;
	effectif = new vector<Joueur>;
	staff = new vector<Personne>;
}

Club::~Club()
{
	delete nom;
	delete histoire;
	delete couleur;
	delete ville;
	delete annee_creation;
	delete palmares;
	delete effectif;
	delete staff;
}

void Club::SetClub(Club* club)
{
	bool cont = 1;
	Joueur* unJoueur = NULL;
	Joueur* nouvJoueur;

	printf("Veuillez entrer le nom du club: ");
	scanf("%s", *club->nom);
	printf("Entrez la ville du club: ");
	scanf("%s", *club->ville);
	printf("Entrez la couleur du club: ");
	scanf("%s", *club->couleur);
	printf("Entrez l'histoire du club: ");
	scanf("%s", *club->histoire);
	printf("Entrez la date de creation du club: ");
	scanf("%Date", *club->annee_creation);
	printf("Entrez un palmares du club: ");
	scanf("%Palmares", *club->palmares);
	printf("Entrez le stade du club: ");
	scanf("%Stade", *club->stade_du_club);

	while (cont == 1)
	{
		nouvJoueur = new Joueur;
		unJoueur->SetJoueur(nouvJoueur);
		effectif->push_back(*nouvJoueur);
		cout << "Si vous voulez entrer un nouveau joueur, entrez 1. Sinon, entrez 0" << endl;
		cin >> cont;
	}
	return;
}

void Club::AfficherClub(Club*)
{
	cout << this->nom << endl;
	return;
}

void Club::DeleteClub(Club* club)
{
	club->nom = NULL;
	club->histoire = NULL;
	club->couleur = NULL;
	club->ville = NULL;
	club->annee_creation = NULL;
	club->palmares = NULL;
	club->stade_du_club = NULL;
	Club::~Club();

	return;
}

void Club::AfficherJoueurs(Club* club)
{
	Joueur *joueurCourant;
	joueurCourant = NULL;
	for (int i = 0; i < effectif->size(); i++)
	{
		joueurCourant->AfficherJoueur(effectif->at(i));
	}

	return;
}

void Club::CopyVector()
{
	Entraineur entraineur;
	vecteur_entraineur2 = entraineur.vecteur_entraineur;
}

