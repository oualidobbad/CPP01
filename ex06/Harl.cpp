#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
}

void Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. \nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. \nI’ve been coming for years, whereas you started working here just last month." << std::endl << std::endl;
}

void Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::filter_complain(std::string level)
{
	std::string messages[5] = {"DEBUG", "INFO", "WARNING", "ERROR", "OTHER"};

	int wich_one;

	for (wich_one = 0; wich_one < 5; wich_one++)
	{
		if (messages[wich_one] == level)
			break;
	}
	complain(wich_one);
}

void Harl::complain(int level)
{
	std::map<int, void (Harl::*)()> map_fun;

	map_fun[0] = &Harl::debug;
	map_fun[1] = &Harl::info;
	map_fun[2] = &Harl::warning;
	map_fun[3] = &Harl::error;

	switch (level)
	{
		case 0:
			for (int i = level; i < 4; i++)
				(this->*map_fun[i])();
			break;
		case 1:
			for (int i = level; i < 4; i++)
				(this->*map_fun[i])();
			break;
		case 2:
			for (int i = level; i < 4; i++)
				(this->*map_fun[i])();
			break;
		case 3:
			for (int i = level; i < 4; i++)
				(this->*map_fun[i])();
			break;
	
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}


