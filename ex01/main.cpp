#include "Zombie.hpp"

int main()
{
	Zombie* array = zombieHorde(7, "ZombieArray");

	for (int i = 0; i < 7; i++)
		array[i].announce();

	delete[] array;

	return 0;
}