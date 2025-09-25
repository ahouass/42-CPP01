#include "Zombie.hpp"


int main()
{
	Zombie zombie1("HULK");
	zombie1.announce();

	Zombie* zombie2 = newZombie("DDDD");
	zombie2->announce();
	delete zombie2;

	randomChump("SPIDER");
	return 0;
}