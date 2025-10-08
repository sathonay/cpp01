#include <string>
#ifndef WEAPON_H
#define WEAPON_H
class Weapon {
	private:
		std::string type;
	public:
		~Weapon();
		Weapon();
		Weapon(std::string string);
		std::string getType();
		void setType(std::string type);
};
#endif
