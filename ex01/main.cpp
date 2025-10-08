#include "Zombie.hpp"

int main()
{
	Zombie* zs = zombieHorde(5, "Alice");
	for (int i = 0; i < 5; i++)
		zs[i].announce();
	delete[] zs;
}
