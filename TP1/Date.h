#include <string>

//Déclaration d'une classe Date avec comme attributs un seul string pouvant être entré selon le format de date désiré
class Date
{
public:
	Date();
	Date(std::string);
	~Date();

private:
	std::string date;
};