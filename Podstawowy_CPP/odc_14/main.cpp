#include <iostream>
#include <cstdint>  // dla uintptr_t
#include <stdlib.h>
#include <time.h>


using	namespace	std;

void	quick_sort(int *tab, int left, int right)
{
	int	v = tab[(left+right) / 2];
	int	i, j, x;
	i = left;
	j = right;
	do {
		while (tab[i] < v)
			i++;
		while (tab[j] > v)
			j--;
		if (i <= j)
		{
			x = tab[i];
			tab[i] = tab[j];
			tab[j] = x;
			i++;
			j--;
		}
	} while (i <= j);
	if (j > left)
		quick_sort(tab, left, j);
	if (i < right)
		quick_sort(tab, i, right);
}

void	bubble_sort(int *tab, int n)
{
	bool	flag = true;
	int i = 0;
	int temp;

	while (flag)
	{
		flag = false;
		i = 0;
		while (i < n - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				flag = true;
			}
			i++;
		}
		n--;
	}
}

int	main()
{
	int	nums;
	int	*tab, *tab2;
	int	i = 0;
	clock_t	start, stop;
	double t;
	cout << "Sorting algo compare! v.1" << endl;
	cout << "How many random numers you want to add to table?: ";
	cin >> nums;

	// dynamic allocation
	tab = new int [nums];
	tab2 = new int [nums];
	srand(time(NULL));

	while (i < nums)
	{
		tab[i] = rand()%100000+1;
		i++;
	}
	i = 0;
	while (i < nums)
	{
		tab2[i] = tab[i];
		i++;
	}

	cout << "Bubble sort. Please wait!" << endl;
	start = clock();
	bubble_sort(tab, nums);
	stop = clock();
	t = (double)(stop - start) / CLOCKS_PER_SEC;
	cout << endl << "Bubble sort time: " << t << " s"<< endl;

	cout << "Quick sort. Please wait!" << endl;
	start = clock();
	quick_sort(tab2, 0, nums - 1);
	stop = clock();

	t = (double)(stop - start) / CLOCKS_PER_SEC;
	cout << endl << "Quick sort time: " << t << " s"<< endl;
	delete [] tab;
	delete [] tab2;

	return 0;
}