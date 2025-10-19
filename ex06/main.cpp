#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;

	if (ac != 2){
		std::cerr << "must be enter just 2 args" << std::endl;
		return 1;
	}
	harl.filter_complain(av[1]);
	return 0;
}
