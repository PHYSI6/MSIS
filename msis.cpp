#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int kol = 0;
	int array[6][7];
	int array_double[6][7];
	setlocale(0, "rus");
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			cout << "a[" << i << "][" << j << "]=";
			cin >> array[i][j];
		}
	}

	
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 7; j++)
		{
			if (array[i][j] < 0)
			{
				array_double[i][j] = -1;
			}
			else if (array[i][j] == 0)
			{
				array_double[i][j] = 0;
			}
			else
			{
				array_double[i][j] = array[i][j] * cos(array[i][j]);
			}
		}
	cout << "----------Исходный массив----------" << endl;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	cout << "----------Результирующий массив----------" << endl;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			cout << array_double[i][j] << "\t";
		}
		cout << endl;
	}
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (array_double[i][j] == -1)
			{
				kol++;
			}
		}
		cout << endl;
	}
	cout << "Количество -1 в результирующем массиве: " << kol << endl;
	system("pause");
	return 0;
}
