#include "Harl.hpp"

int main()
{
	Harl	harl;

	harl.complain("INFO");
	harl.complain("DEBUG");
	harl.complain("ERROR");
	harl.complain("WARNING");
	harl.complain("NOTHING");
	return (0);
}