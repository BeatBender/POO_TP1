#include <string>
#include "Date.h"

class Palmares
{
public:
	Palmares();
	Palmares(std::string, Date);	//Titre et la date d'obtention du titre
	~Palmares();

private:
	std::string titre;
	Date date;
};