#include <string>

class Personne
{
public:
	Personne();
	void SetPersonne();
	~Personne();

private:
	std::string nom, prenom, role;
	int age;
};