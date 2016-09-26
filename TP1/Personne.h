#include <string>

class Entraineur;

class Personne
{
	friend class Entraineur;
public:
	Personne();
	void SetPersonne();
	bool IsEntraineur(Personne);
	~Personne();

private:
	std::string nom, prenom, role;
	int age;
};