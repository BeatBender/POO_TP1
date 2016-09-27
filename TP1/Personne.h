#include <string>

class Entraineur;

class Personne
{
	friend class Entraineur;	//Pour que Entraineur puisse acceder aux attributs de Personne
public:
	Personne();
	void SetPersonne();			//Entre les informations d'une personne
	bool IsEntraineur(Personne);//Retourne vrai si l'attribut "rôle" d'une peronne est un entraineur
	~Personne();

private:
	std::string nom, prenom, role;
	int age;
};