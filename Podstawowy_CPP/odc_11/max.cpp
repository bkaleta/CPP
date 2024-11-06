#include <iostream>

using	namespace	std;

void	ft_max(int a, int b, int c);

int	main()
{
	int	a, b, c;

	cout << "Podaj 3 liczby rozdzielone spacja: ";
	cin >> a >> b >> c;

	ft_max(a, b, c);
	return (0);
}

void	ft_max(int a, int b, int c)
{
	int	m;
	
	m = a;

	if (b > m)
		m = b;
	if (c > m)
		c = m;
	cout << "Najwszieksza liczba jest: " << m << endl;
}