#include "Zombie.hpp"

int main()
{
	Zombie* alice = newZombie("Alice");
	randomChump("Bob");
	alice->announce();
	delete(alice);
}
