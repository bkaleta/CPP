#include <iostream>

using	namespace	std;

int	main()
{
	string	imie;
	int		length;

	cout << "Podaj swoje imie: ";
	cin >> imie;
	length = imie.length();
	
	if (imie[length - 1] == 'a')
		cout << "Wydaje mi sie ze jestes kobieta" << endl;
	else
		cout << "Wydaje mi sie ze jestes facetem" << endl;

	return (0);
}