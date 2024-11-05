#include <iostream>
#include <string>
#include <algorithm>

using	namespace	std;

// int	main()
// {
// 	string	wyraz;
// 	int		len;

// 	cout << "Podaj wyraz: ";
// 	getline(cin, wyraz);
// 	len = wyraz.length();

// 	for (int i = len - 1; i >= 0; i--)
// 	{
// 		cout<< wyraz[i];
// 	}
// 	cout << endl;

// 	return (0);
// }


// STR JOIN 
// int	main()
// {
// 	string jeden, dwa, trzy;

// 	jeden = "Ala ma ";
// 	dwa = "kota";
// 	trzy = jeden + dwa;

// 	cout << trzy << endl;
// 	return (0);
// }

// STR TO UPPER

int	main()
{
	string	napis = "Ala ma kota";
	string	szukaj = "kot";

	size_t	pozycja = napis.find(szukaj);

	transform(napis.begin(), napis.end(), napis.begin(),::toupper);
	cout << napis << endl;

	transform(napis.begin(), napis.end(), napis.begin(),::tolower);
	cout << napis << endl;

	if (pozycja != string::npos)
		cout << "znaleziono na pozycji: " << pozycja;
	else
		cout << "Nie znaleziono";

}