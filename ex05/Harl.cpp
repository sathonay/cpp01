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
    // OLD -> return (str.at(0) % str.at(str.length() - 1)) % 16;
    // NOKSIO -> return (str.at(0) % str.at(str.length() - 1)) & 15;
    return (((str.at(0) & str.at(1) & 0xF) + 1) >> 1);
}

void Harl::complain( std::string level )
{
	void (Harl::*fn[5])(void) = {
		&Harl::error,
		&Harl::warning,
		&Harl::debug,
		0,
		&Harl::info
	};
	(this->*fn[hash(level)])();
}
