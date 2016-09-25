#include <string>
#include "Date.h"

class Palmares
{
public:
	Palmares();
	Palmares(std::string, Date);
	~Palmares();

private:
	std::string titre;
	Date date;
};