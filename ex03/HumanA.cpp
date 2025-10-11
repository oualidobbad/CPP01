#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
{
	this->weapon = &weapon;
	this->name = name;
}

void HumanA::setWeapon(Weapon weapon)
{
	*this->weapon = weapon;
}

Weapon HumanA::getWeapon()
{
	return *weapon;
}

void HumanA::setName(std::string name)
{
	this->name = name;
}

std::string HumanA::getName()
{
	return name;
}

void HumanA::attack()
{
	std::cout << this->name + " attacks with their " + this->weapon->getType() << std::endl;
}