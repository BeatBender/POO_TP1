#include "Palmares.h"
#include <string>

using namespace std;

Palmares::Palmares()
{
	titre = " ";
	Date::Date();
}

Palmares::Palmares(string t, Date d)
{
	titre = t;
	date = d;
}

Palmares::~Palmares()
{

}