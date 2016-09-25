#include "Date.h"
#include <string>

using namespace std;

Date::Date()
{
	jour = "0";
	mois = "0";
	annee = "0";
}

Date::Date(string j, string m, string a)
{
	jour = j;
	mois = m;
	annee = a;
}

Date::~Date()
{

}