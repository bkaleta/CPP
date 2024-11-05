#include <iostream>
#include <cstdint>  // dla uintptr_t
#include <stdlib.h>
#include <time.h>

using	namespace	std;

int	main()
{
	int		ile;
	int		*tablica;
	clock_t	start, stop;
	double	czas;

	cout << "Ile miejsc w tablicy: ";
	cin >> ile;
	tablica = new int [ile];

	start = clock();
	for (int i = 0; i < ile; i++)
	{
		tablica[i] = i;
		tablica[i] += 50;
	}
	stop = clock();
	czas = (double)(stop - start) / CLOCKS_PER_SEC;

	cout << "Czas zapisu (bez wskaznika): " << czas << endl;
	delete [] tablica;

	int	*wskaznik = tablica;
	tablica = new int [ile];

	start = clock();
	for (int i = 0; i < ile; i++)
	{
		*wskaznik = i;
		*wskaznik += 50;
		wskaznik++;
	}
	stop = clock();
	czas = (double)(stop - start) / CLOCKS_PER_SEC;
	cout << "Czas zapisu ZE WSKAZNIKIEM: " << czas << endl;
	return (0);
}