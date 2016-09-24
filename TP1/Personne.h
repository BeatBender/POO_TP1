#include <string>

class Personne
{
public:
	Personne();
	~Personne();

private:
	std::string nom, prenom, role;
	int age;
};