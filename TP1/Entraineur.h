#include <string>
#include <list>
#include "TitreGagne.h"

class Entraineur
{
public:
	Entraineur();
	~Entraineur();

private:
	std::string nom, prenom, lieu_obtention_grade;
	std::list<TitreGagne> liste_titre;
};