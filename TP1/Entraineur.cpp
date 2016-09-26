#include "Entraineur.h"
#include "Personne.h"
#include <iostream>
#include <vector>

using namespace std;

Entraineur::Entraineur()
{
	nom = " ";
	prenom = " ";
	lieu_obtention_grade = " ";
	vector<TitreGagne> liste_titre;
}

void Entraineur::SetEntraineur(Entraineur* trainer)
{
	bool cont = 1;
	printf("Veuillez entrer le nom de l'entraineur: ");
	scanf("%s", trainer->nom);
	printf("Veuillez entrer le prenom de l'entraineur: ");
	scanf("%s", trainer->prenom);
	printf("Veuillez entrer le lieu d'obtention du grade de l'entraineur: ");
	scanf("%s", trainer->lieu_obtention_grade);
	printf("Veuillez entrer la liste des titres de l'entraineur: ");

	while (cont != 1)
	{
		TitreGagne unTitre;
		scanf("%TitreGagne", unTitre);
		cout << "Entrez 1 si vous voulez continuer, entrez 0 sinon.";
		cin >> cont;
	}

	return;	
}

void Entraineur::PushBackEntraineur(Personne entraineur)
{
	Entraineur nouvEntraineur;
	nouvEntraineur.nom = entraineur.nom;
	nouvEntraineur.prenom = entraineur.prenom;
	vecteur_entraineur.push_back(nouvEntraineur);
}

int Entraineur::ReturnListe_Titre()
{
	return liste_titre.size();
}

string Entraineur::ReturnTrainerName(Entraineur entraineur)
{
	return entraineur.prenom + " " + entraineur.nom;
}

Entraineur::~Entraineur()
{

}