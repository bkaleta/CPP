#include <iostream>
#include <unistd.h>

using	namespace	std;

int	main()
{
	for (int i = 15; i >= 0; i--)
	{
		sleep(1);
		system("clear");
		if (i == 0)
			break ;
		cout << i << endl;
	}
	cout << "JEBUT" << endl;
}