#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << this->name << " has been destroyed" << std::endl;
}

Zombie::Zombie(){}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::announce(void)
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
