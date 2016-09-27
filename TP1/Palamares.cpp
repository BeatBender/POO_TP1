#include "Palmares.h"
#include <string>

using namespace std;

Palmares::Palmares()//Constructeur
{
	titre = " ";
	Date::Date();
}

Palmares::Palmares(string t, Date d) //Constructeur
{
	titre = t;
	date = d;
}

Palmares::~Palmares()//Destructeur
{

}