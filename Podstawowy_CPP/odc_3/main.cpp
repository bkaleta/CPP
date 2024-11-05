#include <iostream>
#include <string.h>
#include <unistd.h>

using	namespace	std;

int	main()
{
	string	PIN;
	int		fail = 3;

	cout << "Witaj w naszym banku!" << endl;
	cout << "Podaj numer PIN: ";
	cin >> PIN;

	while (1)
	{
		if (PIN == "4242")
		{
			cout << "Poprawny PIN" << endl;
			break ;
		}
		else
		{
			fail--;
			cout << "PIN NIEPRAWIDLOWY! POZOSTAŁO CI " << fail << " PRÓB" << endl;
			if (fail == 0)
			{
				cout << "KARTA ZABLOKOWANA DZWONIE PO POLICJE!" << endl;
				return (0);
			}
			sleep(1);
			cout << "SPRÓBUJ JESZCZE RAZ!: ";
			cin >> PIN;
		}	
	}

	return (0);
}