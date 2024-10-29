#include <iostream>
#include <unistd.h>
#include <string.h>

using	namespace	std;

int	main()
{
	int	age;

	cout << "Ile masz lat? ";
	cin >> age;

	if (age < 18)
		cout << "Nie jestes pelnoletni i nie mozesz zostac prezydentem" << endl;
	else if (age >= 18 && age < 35)
		cout << "Jestes pelnoletni ale nie mozesz zostac prezydentem" << endl;
	else
		cout << "Jestes pelnoletni i mozesz zostac prezydentem!" << endl;
	return (0);
}