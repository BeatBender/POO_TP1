#include <string>
#include <vector>
#include "TitreGagne.h"

class Entraineur
{
public:
	vector<Entraineur> vecteur_entraineur;
	

	Entraineur();
	void SetEntraineur(Entraineur*);
	void PushBackEntraineur(Personne);
	int ReturnListe_Titre();
	std::string ReturnTrainerName(Entraineur);
	~Entraineur();

private:
	std::string nom, prenom, lieu_obtention_grade;
	vector<TitreGagne> liste_titre;
};