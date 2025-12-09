#include "Weapon.hpp"
#include <iostream>
#ifndef HUMAN_B
#define HUMAN_B
class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
	public:
		~HumanB();
		HumanB(std::string name);

		void attack(void);
		void setWeapon(Weapon &weapon);
};
#endif
