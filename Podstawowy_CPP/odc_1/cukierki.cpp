#include <iostream>

using	namespace	std;

int	main()
{
	int	ilosc_uczniow;
	int	ilosc_cukierkow;
	int	cukierki_dla_uczniow;
	int	cukierki_dla_jasia;

	cout << "Podaj ilosc uczniów w klasie: ";
	cin >> ilosc_uczniow;
	cout << "Podaj ilosc cukierków: ";
	cin >> ilosc_cukierkow;

	cukierki_dla_uczniow = ilosc_cukierkow / (ilosc_uczniow - 1);
	cout << "Cukierkow dla kazdego ucznia: " << cukierki_dla_uczniow << endl;
	cukierki_dla_jasia = ilosc_cukierkow - cukierki_dla_uczniow * (ilosc_uczniow - 1);
	cout << "Dla Ciebie zostanie: " << cukierki_dla_jasia << endl;

	return (0);
}
