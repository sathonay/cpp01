#include "Harl.hpp"
#include <iostream>
#include <string>


//int hashg(std::string str)
//{
//	return (str.at(0) % str.at(str.length() - 1)) % 16;
//}

int main()
{
	Harl harl;
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	//std::string keys[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	//
	//for (int i = 0; i < 4; i++)
	//{
	//	std::cout << keys[i] << " => " << hashg(keys[i]) << std::endl;
	//}
}
