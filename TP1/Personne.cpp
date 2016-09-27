#include "Personne.h"
#include "Entraineur.h"
#include <vector>

using namespace std;

Personne::Personne() //Constructeur
{
	nom = "";
	prenom = "";
	role = "";
	age = 0;
}

bool Personne::IsEntraineur(Personne personne)
{
	if (personne.role == "Entraineur" || "Entraîneur" || "entraineur" || "entraîneur") //Tiens en compte les différentes façons de l'écrire par l'utilisateur
	{
		return 1;
	}

	else
	{
		return 0;
	}
}

void Personne::SetPersonne()
{
	printf("Entrez le prenom de la personne: ");
	scanf("%s", prenom);
	printf("Entrez le nom de la personne: ");
	scanf("%s", nom);
	printf("Entrez le role de la personne: ");
	scanf("%s", role);
	printf("Entrez son age: ");
	scanf("%i", age);

	return;
}

Personne::~Personne()//Destructeur
{

}