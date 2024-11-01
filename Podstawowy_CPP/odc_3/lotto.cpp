#include <iostream>
#include <unistd.h>
#include <time.h>

using	namespace	std;

int	main()
{
	int	liczba;

	cout << "Maszyna losująca jest pusta, następuje zwolnienie blokady..." << endl;
	sleep(3);
	srand(time(NULL));

	for (int i = 1; i <= 6; i++)
	{
		liczba = rand() % 49 + 1;
		sleep(1);
		cout << liczba << "\a" << endl;
	}
	return (0);
}