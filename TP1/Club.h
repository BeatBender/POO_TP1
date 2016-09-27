#include <string>
#include <vector>
#include "Date.h"
#include "Joueur.h"
#include "Entraineur.h"
#include "Palmares.h"
#include "Stade.h"
#include "Personne.h"

class Club
{
public:
	Club();
	void DeleteClub(Club*);		//Supprime un club
	void SetClub(Club*);		//Entre les informations sur un club
	void AfficherClub(Club*);	//Affiche un club à l'écran
	void AfficherJoueurs(Club*);//Affiche les joueurs d'un club
	void CopyVector();			//Copie le vecteur d'entraineur créer par la classe entraineur au vecteur local d'entraineur de la classe club
	~Club();

private:
	std::string *histoire, *couleur, *ville, *nom;
	Date* annee_creation;
	std::vector<Joueur>* effectif;
	Palmares* palmares;
	Stade* stade_du_club;
	std::vector<Personne>* staff;
	std::vector<Entraineur> vecteur_entraineur2;	//Vecteur local d'entraineur de club
};