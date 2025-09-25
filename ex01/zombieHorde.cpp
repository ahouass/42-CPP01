#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return (NULL);

	Zombie* array[N];

	for (int i = 0; i < N; i++)
		array[i] = new Zombie(name);

	return *array;
}