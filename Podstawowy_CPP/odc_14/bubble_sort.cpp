#include <iostream>

using	namespace	std;

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

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Tablica przed sortowaniem: ";
    int j = 0;
    while (j < size)
    {
        cout << arr[j] << " ";
        j++;
    }
    cout << endl;

    bubble_sort(arr, size);

    cout << "Tablica po sortowaniu: ";
    j = 0;
    while (j < size)
    {
        cout << arr[j] << " ";
        j++;
    }
    cout << endl;

    return 0;
}