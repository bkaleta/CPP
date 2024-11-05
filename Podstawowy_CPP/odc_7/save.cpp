#include <iostream>
#include <fstream>

using	namespace	std;

int	main()
{
	fstream	plik;
	string	imie, nazwisko;
	int		nr_tel;

	cout << "Podaj imie: "; 		cin >> imie;
	cout << "Podaj nazwisko: "; 	cin >> nazwisko;
	cout << "Podaj nr telefonu: "; 	cin >> nr_tel;

	plik.open("wizytowka.txt", ios::out | ios::app);
	plik<<imie<<endl;
	plik<<nazwisko<<endl;
	plik<<nr_tel<<endl;

	plik.close();
}