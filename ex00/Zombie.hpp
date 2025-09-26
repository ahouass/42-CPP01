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

void randomChump( std::string name );
Zombie* newZombie( std::string name );