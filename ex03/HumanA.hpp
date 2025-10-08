#include "Weapon.hpp"
#include <iostream>
#ifndef HUMAN_A
#define HUMAN_A
class HumanA
{
	private:
		std::string name;
		Weapon& weapon;
	public:
		~HumanA();
		HumanA(std::string name, Weapon& weapon);

		void attack(void);
};
#endif
