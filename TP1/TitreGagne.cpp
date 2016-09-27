#include "TitreGagne.h"
#include "Club.h"

TitreGagne::TitreGagne()//Constructeur
{
	Palmares::Palmares();
	Club::Club();
}

void TitreGagne::SetTitre(TitreGagne* titre)
{
	printf("Entrez le palmares gagne: ");
	scanf("%Palmares", titre->palmares);
	printf("Entrez le club d'obtention du palmares");
	scanf("%Club", titre->club);

	return;
}

TitreGagne::~TitreGagne()//Destructeur
{

}