#include <iostream>

using	namespace	std;

int	main()
{
	float	oceny[5];
	float	suma = 0, srednia;
	int		i = 0;

	cout << "Hej! policze Ci średnią!" << endl << endl;
	while (i < 5)
	{
		cout << "Podaj " << i + 1 << " ocene: ";
		cin >> oceny[i];
		suma += oceny[i];
		i++;
	}
	srednia = suma / 5;
	cout << endl << "Twoja srednia to: " << srednia << endl;
	return (0);
}