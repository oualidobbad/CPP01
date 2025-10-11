#include <iostream>
#include <fstream>

void replace(std::string& str, std::string s1, std::string s2){
	
	size_t pos;

	start:
		pos = str.find(s1);
		if (pos != std::string::npos)
		{
			std::string s;
			s = str.substr(0, pos);
			s += s2;
			s += str.substr(pos + s1.length());
			str = s;
			goto start;
		}
}

bool filesIsOpen(std::fstream &fileIn, std::fstream& fileOut)
{
	if (!fileIn.is_open()){
		std::cerr << "File cannot be opened for reading!\n";
		if (fileOut.is_open())
			fileOut.close();
		return false; 
	}

	if (!fileOut.is_open()){
		std::cerr << "File replacement is not open!\n";
		fileIn.close();
		return false;
	}

	return true;
}

int main(int ac, char **av)
{

	if (ac > 4 or ac < 4)
	{
		std::cout << "must be 4 args\n";
		return 1;
	}
	std::string newfile = av[1];
	newfile	+= ".replace";

	std::fstream filein(av[1], std::ios::in);
	std::fstream fileout(newfile.c_str(), std::ios::out);
	if(filesIsOpen(filein, fileout) == false)
		return 1;

	std::string s;
	while (getline(filein, s))
	{
		replace(s, av[2], av[3]);
		fileout.write(s.c_str(), s.length());
		if (!filein.eof())
			fileout.write("\n", 1);
	}
	filein.close();
	fileout.close();
	return 0;
}