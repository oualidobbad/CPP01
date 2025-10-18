#include "Zombie.hpp"

int main()
{
	int N = 4;

	if (N <= 0)
		N = 0;
	Zombie *zom = zombieHorde(N, "fooo");
	for (int i = 0; i < N; i++)
		zom[i].announce();
	delete[] zom;
	return 0;
}
