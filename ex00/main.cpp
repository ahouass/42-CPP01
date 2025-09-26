#include "Zombie.hpp"

int main()
{
	Zombie zombie1;
	zombie1.set_name("HULK");
	zombie1.announce();

	Zombie* zombie2 = newZombie("IRON");
	zombie2->announce();

	randomChump("SPIDER");

	delete zombie2;
	
	return 0;
}