#include <string>

//D�claration d'une classe Date avec comme attributs un seul string pouvant �tre entr� selon le format de date d�sir�
class Date
{
public:
	Date();
	Date(std::string);
	~Date();

private:
	std::string date;
};