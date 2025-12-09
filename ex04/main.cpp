#include <iostream>
#include <ios>
#include <fstream>
#include <string>

std::string str_replace(std::string str, std::string find, std::string replace)
{
	size_t f_length = find.length();
	std::size_t offset = str.find(find);
	while (offset != std::string::npos)
	{
		str.erase(offset, f_length);
		str.insert(offset, replace);
		offset = str.find(find);
	}
	return (str);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << *av << " <file> <str_to_replace> <str_replacement>" << std::endl;
		return 1;
	}

	std::string filename(av[1]);
	std::string find(av[2]);
	std::string replacement(av[3]);

	std::ifstream infile(filename.c_str(), std::ifstream::in);
	std::ofstream outfile (filename.append(".replace").c_str(), std::ofstream::trunc);

	std::string line;
	do {
			std::getline(infile, line);
			outfile << str_replace(line, find, replacement) << std::endl;
//		https://cplusplus.com/reference/ios/basic_ios/rdstate
	} while (infile.rdstate() == 0 && outfile.rdstate() == 0);

	if ((infile.rdstate() & std::ifstream::failbit) && !(infile.rdstate() & std::ifstream::eofbit))
		std::cerr << "Infile: Logical error on i/o operation" << std::endl;
	if ((infile.rdstate() & std::ifstream::badbit) && !(infile.rdstate() & std::ifstream::eofbit))
		std::cerr << "Infile: Read/writing error on i/o operation" << std::endl;

	if ((outfile.rdstate() & std::ifstream::failbit) && !(outfile.rdstate() & std::ifstream::eofbit))
		std::cerr << "Outfile: Logical error on i/o operation" << std::endl;
	if ((outfile.rdstate() & std::ifstream::badbit) && !(outfile.rdstate() & std::ifstream::eofbit))
		std::cerr << "Outfile: Read/writing error on i/o operation" << std::endl;
	infile.close();
	outfile.close();
	return 0;
}
