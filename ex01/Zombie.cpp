#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	std::cout << "Zombie has been created" << std::endl;
}
Zombie::Zombie(std::string	name) : name(name) {}

Zombie::~Zombie()
{
	std::cout << "Zombie '" << name << "' has been destroyed" << std::endl;
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
