#include "Zombie.hpp"

int main()
{
	Zombie* array = zombieHorde(7, "ZombieArray");

	for (int i = 0; i < sizeof(array); i++)
	{
		std::cout << "[" << i + 1 << "] ";
		array[i].announce();
	}

	delete[] array;

	return 0;
}