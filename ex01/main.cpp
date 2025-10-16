#include "Zombie.hpp"

int main()
{
	Zombie *zom = zombieHorde(3, "fooo");
	for (int i = 0; i < 3; i++)
		zom[i].announce();
	delete[] zom;
	return 0;
}