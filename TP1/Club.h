#include <string>
#include <list>
#include "Date.h"
#include "Joueur.h"
#include "Palmares.h"
#include "Stade.h"
#include "Personne.h"

class Club
{
public:
	Club();
	void SetClub(Club*);
	~Club();

private:
	std::string *histoire, *couleur, *ville, *nom;
	Date* annee_creation;
	std::list<Joueur>* effectif;
	Palmares* palmares;
	Stade* stade_du_club;
	std::list<Personne>* staff;
};