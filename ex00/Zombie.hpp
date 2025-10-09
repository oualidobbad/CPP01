#ifndef ZOMBIE_HPP
#define ZOMIBIE_HPP
#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		void announce( void );
		std::string getName();
		void setName(std::string name);
};
	Zombie* newZombie( std::string name);
	void randomChump( std::string name);

#endif