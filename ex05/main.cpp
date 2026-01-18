#include "Harl.hpp"
#include <iostream>
#include <string>


// int hashg(std::string str)
// {
// 	int i = (((str.at(0) & 7) ^ 5));
// 	int i4 = i & 0x4;
//     return ((i | (i4 >> 1)) | (i | (i4 >> 2))) & 0x3;
// }

// https://fr.wikipedia.org/wiki/Interpolation_lagrangienne
// proposed by @greentor
// double hash_math(std::string str)
// {
// 	double x = (double) (str.at(0) & 7);
// 	return ( ( ((7.d - x) / 3.d) + (1.d/ 6.d) ) * (x - 1.d) - (1.d/3.d) ) * (x - 4.d);
// }

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
	// 	std::cout << keys[i] << " => " << hash_math(keys[i]) << std::endl;
	// 	std::cout << keys[i] << " => " << hashg(keys[i]) << std::endl;
	// 	bina_print(hashg(keys[i]));
	// }
}
