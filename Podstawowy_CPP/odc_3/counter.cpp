#include <iostream>

using	namespace	std;

int	main()
{
	string	imie;
	int		liczba;

	cout << "podaj imie: ";
	cin >> imie;
	cout << "podaj dodatnia liczbe calkowita: ";
	cin >> liczba;

	for (int i = 1; i <= liczba; i++)
	{
		cout << i << ". " << imie << endl;
	}

	return (0);
}
