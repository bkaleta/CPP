#include <iostream>
#include <iomanip>

using	namespace	std;

int	main()
{
	long double	fib[100000];
	int	n;

	cout << "Ile liczb fibonacciego mam wyznaczyc: ";
	cin >> n;

	fib[0] = 1;
	fib[1] = 1;

	for(int	i = 2; i < n; i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
	}

	cout << setprecision(10000);
	// for (int i = 0; i < n; i++)
	// {
	// 	cout << endl << "wyraz nr " << i + 1 << ": " << fib[i];
	// }

	// cout << endl << "wyraz nr " << n << ": " << fib[n-1] << endl;
	cout << "Zlota liczba: " << fib[n-1]/fib[n-2] << endl;
}