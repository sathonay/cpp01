#include "Weapon.hpp"
#include <iostream>

Weapon::~Weapon()
{}

Weapon::Weapon()
{
	this->type = "";
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

std::string Weapon::getType()
{
	return this->type;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}

