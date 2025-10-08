#include <string>
#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPRT = &str;
	std::string& stringREF = str;

	std::cout << stringPRT << std::endl;
	std::cout << &stringREF << std::endl;
	std::cout << *stringPRT << std::endl;
	std::cout << stringREF << std::endl;
}
