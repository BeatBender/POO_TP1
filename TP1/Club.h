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
	void DeleteClub(Club*);
	void SetClub(Club*);
	void AfficherClub(Club*);
	void AfficherJoueurs(Club*);
	void CopyVector();
	~Club();

private:
	std::string *histoire, *couleur, *ville, *nom;
	Date* annee_creation;
	std::vector<Joueur>* effectif;
	Palmares* palmares;
	Stade* stade_du_club;
	std::vector<Personne>* staff;
};