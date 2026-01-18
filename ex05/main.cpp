#include "Harl.hpp"
#include <iostream>
#include <string>
#include <cstdio>

// void bina_print(int n) {
// 	for (int i = 31; i >= 0; --i){printf("%d", n >> i & 1);}printf("\n");
// }

// int hashg(std::string str)
// {
// 	int i = (((((str.at(0) & 7))) + 3) >> 1) & 0x3;
// 	// printf("i: ");bina_print(i);
// 	// printf("j: ");bina_print(j);
// 	// printf("+: ");bina_print(i + j);
//     return (i);
// }

// https://fr.wikipedia.org/wiki/Interpolation_lagrangienne
// proposed by @greentor
// double hash_math(std::string str)
// {
// 	double x = (double) (str.at(0) & 7);
// 	return ( ( ((7.d - x) / 3.d) + (1.d/ 6.d) ) * (x - 1.d) - (1.d/3.d) ) * (x - 4.d);
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
