#include "Club.h"
#include <iostream>

Club::Club()
{
	nom = new std::string;
	histoire = new std::string;
	couleur = new std::string;
	ville = new std::string;
	annee_creation = new Date();
	palmares = new Palmares;
	stade_du_club = new Stade;
}

Club::~Club()
{
	delete nom;
	delete histoire;
	delete couleur;
	delete ville;
	delete annee_creation;
	delete palmares;
}

void Club::SetClub(Club*)
{
	std::cin >> *palmares;
	printf("Veuillez entrer le nom du club: ");
	scanf("%s", *nom);
	printf("Entrez la ville du club: ");
	scanf("%s", *ville);
	printf("Entrez la couleur du club: ");
	scanf("%s", *couleur);
	printf("Entrez l'histoire du club: ");
	scanf("%s", *histoire);
	printf("Entrez la date de creation du club: ");
	scanf("%Date", *annee_creation);
	printf("Entrez un palmares du club: ");
	scanf("%Palmares", *palmares);
	printf("Entrez le stade su club: ");
	scanf("%Stade", stade_du_club);
}