#include <iostream>

using	namespace	std;

long	fib(int n)
{
	if (n == 1 || n == 2)
		return (1);
	else
		return fib(n - 1) + fib(n - 2);
}

int	main()
{
	cout << fib(6) << endl;
}