#include <iostream>
#include <fstream>
#include <cstdlib>

using	namespace	std;

int	main()
{
	string	temat, nick, linia;
	string	tresc[5];
	string	ODPA[5], ODPB[5], ODPC[5], ODPD[5];
	string	poprawna[5];
	int		i = 1;

	fstream	plik;
	plik.open("quiz.txt", ios::in);

	if (plik.good() == false)
	{
		cout << "Nie udalo sie otworzyc pliku";
		exit (0);
	}

	while (getline(plik, i))
	{
		switch (i)
		{
			case 1: temat = linia; break;
			case 2: nick = linia; break;
			case 3: tresc[0] = linia; break;
			
		}
		i++;
	}
}
