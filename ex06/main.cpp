#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Usage: ./harlFilter <level>" << std::endl;
		return (1);
	}

	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string	level = av[1];
	int			index = -1;
	Harl		harl;

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			index = i;
			break ;
		}
	}
	switch (index)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain("DEBUG");
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain("INFO");
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain("WARNING");
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
	return (0);
}