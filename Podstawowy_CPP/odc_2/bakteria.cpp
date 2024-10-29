#include <iostream>

using	namespace	std;

int	main()
{
	int	ilosc_bakterii = 1;
	int	czas = 0;

	while (ilosc_bakterii <= 1000000000)
	{
		czas++;
		ilosc_bakterii = ilosc_bakterii * 2;
		cout << "minelo " << czas << " godzin a ";
		cout << "liczba bakterii wynosi " << ilosc_bakterii << endl;
	}

	return (0);
}