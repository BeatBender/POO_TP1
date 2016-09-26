#include "Palmares.h"


class TitreGagne
{
public:
	TitreGagne();
	void SetTitre(TitreGagne*);
	~TitreGagne();

private:
	Palmares palmares;
	Club club;
};