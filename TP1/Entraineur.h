#include <string>
#include <vector>
#include "TitreGagne.h"

class Entraineur
{
public:
	Entraineur();
	void SetEntraineur(Entraineur*);
	~Entraineur();

private:
	std::string nom, prenom, lieu_obtention_grade;
	vector<TitreGagne> liste_titre;
};