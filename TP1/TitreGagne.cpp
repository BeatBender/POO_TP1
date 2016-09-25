#include "TitreGagne.h"

TitreGagne::TitreGagne()
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
}

TitreGagne::~TitreGagne()
{

}