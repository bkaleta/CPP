#include <iostream>
using namespace std;

int main() 
{
	int	t = 0, n = 0, num = 0, sum = 0;
	
	cin >> t;
	
	while (t)
	{
		sum = 0;
		cin >> n;
		while (n)
		{
			cin >> num;
			sum += num;
			n--;
		}
		
		t--;
	}
	cout << sum << endl;
	return 0;
}
