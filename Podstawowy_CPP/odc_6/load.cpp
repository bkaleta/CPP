#include <iostream>
#include <fstream>
#include <cstdlib>

using	namespace	std;

int	main()
{
	fstream	plik;
	string	imie, nazwisko, linia;
	int		nr_tel, i;

	plik.open("wizytowka.txt", ios::in);
	if(plik.good() == false)
	{
		cout << "Plik nie istnieje";
		exit(0);
	}
	i = 1;
	while (getline(plik, linia))
	{
		switch (i)
		{
			case 1: imie = linia; break ;
			case 2: nazwisko = linia; break ;
			case 3: nr_tel = atoi(linia.c_str()); break ;
		}
		i++;
	}
	plik.close();

	cout << imie << endl;
	cout << nazwisko << endl;
	cout << nr_tel << endl;

	return (0);
}