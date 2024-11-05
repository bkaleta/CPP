#include <iostream>
#include <cstdint>  // dla uintptr_t

using	namespace	std;

int	main()
{
	int	ile;
	int	*tablica;

	cout << "Ile miejsc w tablicy: ";
	cin >> ile;
	tablica = new int [ile];

	for (int i = 0; i < ile; i++)
	{
		tablica[i] = i + 1;
		cout << "Adres tablicy[" << i << "] = " << reinterpret_cast<uintptr_t>(&tablica[i]) << ", wartosc = " << tablica[i] << endl;
	}

	delete [] tablica;
	return (0);
}