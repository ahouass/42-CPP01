#include "Zombie.hpp"
#include <iostream>

void	Zombie::set_name(std::string Name)
{
	name = Name;
}

Zombie::~Zombie()
{
	std::cout << "Zombie '" << name << "' has been destroyed" << std::endl;
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
