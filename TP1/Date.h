#include <string>

class Date
{
public:
	Date();
	Date(std::string, std::string, std::string);
	~Date();

private:
	std::string jour, mois, annee;
};