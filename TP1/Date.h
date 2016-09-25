#include <string>

class Date
{
public:
	Date();
	Date(std::string);
	~Date();

private:
	std::string date;
};