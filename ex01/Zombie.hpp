#pragma once

#include <string>

class Zombie
{
	private:
		std::string name;
	public:
		void	set_name(std::string Name);
		void	announce( void );
		~Zombie();
};

Zombie* zombieHorde( int N, std::string name );