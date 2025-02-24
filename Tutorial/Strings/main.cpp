#include <iostream>

int	main()
{
	std::string	name;

	std::cout << "Podaj imie: ";
	std::getline(std::cin, name);

	// name.empty();
	// name.clear();
	// name.append("some string");
	// name.at(10);
	// name.insert(0, "ma kota");
	// name.find(' ');
	// name.erase(start index, end index);

	std::cout << name << std::endl;
	return 0;
}