#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* zs = new Zombie[N];
	while (N--)
		zs[N].setName(name);
	return zs;
}
