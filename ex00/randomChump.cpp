#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie test;
	test.set_name(name);
	test.announce();
}