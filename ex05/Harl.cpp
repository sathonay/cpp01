#include <iostream>
#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"	<< std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int hash(std::string str)
{
	// return (str.at(0) % str.at(str.length() - 1)) % 16;
	return (str.at(0) % str.at(str.length() - 1)) & 15;
}

void Harl::complain( std::string level )
{
	//std::string keys[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	//void (Harl::*fn[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	//for (int i = 0; i < 4; i++)
	//{
	//	if (level == keys[i])	
	//		(this->*fn[i])();
	//}
	void (Harl::*fn[10])(void) = {0};
	fn[4] = &Harl::debug;
	fn[9] = &Harl::info;
	fn[0] = &Harl::warning;
	fn[5] = &Harl::error;
	(this->*fn[hash(level)])();
}
