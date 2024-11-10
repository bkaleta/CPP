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

int	main()
{
	
}