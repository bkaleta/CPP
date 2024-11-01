#include <iostream>
#include <cstdlib>
#include <time.h>

using	namespace	std;

int	main()
{
	int	liczba;
	int	guess;
	int	counter = 0;

	cout << "Zgadnij o jakiej liczbie z przedziału 1... 100 pomyślałem" << endl;
	srand(time(NULL));
	liczba = rand() % 100 + 1;
	while (guess != liczba)
	{
		counter++;
		cout << "Próba " << counter << "." << endl << endl;
		cin >> guess;
		if (guess == liczba)
			cout << "Gratulacje, wygrałeś w " << counter << " próbie!" << endl;
		else if (guess < liczba)
			cout << "Za mało!" << endl;
		else if (guess > liczba)
			cout << "Za dużo!" << endl;
	}
	return (0);
}