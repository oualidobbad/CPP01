#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

std::string Zombie::getName()
{
	return this->name;
}

Zombie::~Zombie()
{
	std::cout << this->name + ": clean resources" << std::endl;
} 