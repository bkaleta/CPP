#include <iostream>

int	main()
{
	int	punkty = 42;

	// warunek ? wyrazenie prawdziwe : wyrazenie nieprawdziwe;
	// condition ? expression trute : expression false;
	punkty >= 75 ? std::cout << "Gratulacje zdałeś!"<< std::endl : std::cout << "Zabrakło Ci " << 75-punkty << " punkty" << std::endl;
}