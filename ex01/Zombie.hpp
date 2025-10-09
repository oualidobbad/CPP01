#ifndef ZOMBIE_HPP
#define ZOMIBIE_HPP
#include <iostream>
#include <new>

class Zombie
{
	private:
		std::string name;
	
	public:
		void announce(void);
		std::string getName();
		void setName(std::string name);
		~Zombie();
};
	Zombie* zombieHorde( int N, std::string name );

#endif