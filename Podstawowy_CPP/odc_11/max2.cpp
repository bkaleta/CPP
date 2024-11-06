#include <iostream>

using	namespace	std;

void	ft_max(int tab[], int size);

int	main()
{
	int	size = 5;
	int	tab[size];
	int	i = 0;

	cout << "Podaj 5 liczby oddzielone spacjami: ";
	while (i < size)
	{
		cin >> tab[i];
		i++;
	}
	ft_max(tab, size);
	return (0);
}

void	ft_max(int tab[], int size)
{
	int	max = tab[0];
	int i = 1;

	while (i < size)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	cout << "Najwieksza liczba jest: " << max << endl;
}