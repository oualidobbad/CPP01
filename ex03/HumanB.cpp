#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

Weapon HumanB::getWeapon()
{
	return *weapon;
}

void HumanB::setName(std::string name)
{
	this->name = name;
}

std::string HumanB::getName()
{
	return name;
}

void HumanB::attack()
{
	std::cout << this->name + " attacks with their " + this->weapon->getType() << std::endl;
}