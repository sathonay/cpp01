#include "Harl.hpp"
#include <iostream>
#include <string>


int hashg(std::string str)
{
    // OLD -> return (str.at(0) % str.at(str.length() - 1)) % 16;
    return (((str.at(0) & str.at(1) & 0xF) + 1) >> 1);
}
#include <cstdio>

// void bina_print(int n) {
// 	for (int i = 31; i >= 0; --i){printf("%d", n >> i & 1);}printf("\n");
// }

int main()
{
	Harl harl;
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");

	// std::string keys[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	// for (int i = 0; i < 4; i++)
	// {
	// 	std::cout << keys[i] << " => " << hashg(keys[i]) << std::endl;
	// 	bina_print(hashg(keys[i]));
	// }
}
