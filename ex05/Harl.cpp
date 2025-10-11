#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::map<std::string, void (Harl::*)()> map_fun;

	map_fun["debug"] = &Harl::debug;
	map_fun["info"] = &Harl::info;
	map_fun["warning"] = &Harl::warning;
	map_fun["error"] = &Harl::error;
	
	if (map_fun.count(level))
		(this->*map_fun[level])();
	else
		std::cout << "level: " + level +" not found!" << std::endl;
}


