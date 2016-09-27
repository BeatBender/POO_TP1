#include "Palmares.h"


class TitreGagne
{
public:
	TitreGagne();
	void SetTitre(TitreGagne*);	//Entre les information d'un titre
	~TitreGagne();

private:
	Palmares palmares;
	Club club;
};