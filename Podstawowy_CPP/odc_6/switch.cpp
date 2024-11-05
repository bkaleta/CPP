#include <iostream>
#include <stdio.h>
#include <cstdlib>

using	namespace	std;

int	main()
{
	float	x, y;
	int		wybor;

	cout << "Podaj 1 liczbe: ";
	cin >> x;
	cout << "Podaj 2 liczbe: ";
	cin >> y;

	cout << endl;
	while (true)
	{
		cout << "MENU GLOWNE" << endl;
		cout << "--------------------" << endl;
		cout << "1. Dodawanie" << endl;
		cout << "2. Odejmowanie" << endl;
		cout << "3. Mnozenie" << endl;
		cout << "4. Dzielenie" << endl;
		cout << "5. Koniec programu" << endl;

		cout << "Wybierz: ";
		cin >> wybor;
		switch (wybor)
		{
			case 1:
			{
				cout << "Suma = " << x+y << endl;
			}
			break;
			case 2:
			{
				cout << "Róznica = " << x-y << endl;
			}
			break;
			case 3:
			{
				cout << "Iloczyn = " << x*y << endl;
			}
			break;
			case 4:
			{
				if (y == 0) 
					cout << "NIE DZIEL PRZEZ 0";
				else 
					cout << "Iloraz = " << x/y << endl;
			}
			break;
			case 5:
				exit(0);
			break;
		
			default:
				cout << "Nie ma takiej opcji w menu" << endl;
		}
	}
	return (0);
}