#include <iostream>
#include <unistd.h>
#include <string.h>

using	namespace	std;

int	main()
{
	string	login, password;

	while (1)
	{
		cout << "Podaj login: ";
		cin >> login;
		cout << "Podaj haslo: ";
		cin >> password;

		if (login == "admin" && password == "szarlotka")
		{
			cout << "Logowanie poprawne!" << endl;
			break ;
		}
		else
		{
			cout << "Nie udało Ci się zalogować! Spróboj ponownie!" << endl;
		}
	}
	return (0);
}
