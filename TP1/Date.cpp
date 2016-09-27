#include "Date.h"
#include <string>

using namespace std;

Date::Date()	//Constructeur par défaut
{
	date = "0";
}

Date::Date(string d)	//Constructeur
{
	date = d;
}

Date::~Date()	//Destructeur
{

}