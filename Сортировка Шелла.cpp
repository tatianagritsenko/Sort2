#include <iostream>
#include <ctime>
#include <random>
using namespace std;

int i, j, n, d, t;

void Shell(int A[], int n) //сортировка Шелла
{
	d = n / 2;
	while (d > 0)
	{
		for (i = 0; i < n - d; i++)
		{
			j = i;
			while (j >= 0 && A[j] > A[j + d])
			{
				t = A[j];
				A[j] = A[j + d];
				A[j + d] = t;
				j--;
			}
		}
		d = d / 2;
	}
	for (i = 0; i < n; i++) 
		cout << A[i] << " "; //вывод массива

	cout << endl;
}

void main()
{
	setlocale(LC_ALL, "Rus");

	while (true)
	{
		cout << "Размер массива > ";
		cin >> n;
		if (cin.fail() or n < 1)
		{
			cout << "\nВведите натуральное число!\n\n";
			cin.clear(); cin.ignore(1000, '\n');
		}
		else
			break;
	}
	
	int *A = new int[n]; //объявление динамического массива

	srand(time(NULL));

	cout << "\nИсходный массив:\n";

	for (i = 0; i < n; i++) // инициализация массива
	{
		A[i] = 1 + rand() % 100; // от 1 до 100
		cout << A[i] << ' ';
	}

	cout << "\n\nРезультирующий массив:\n";

	Shell(A, n);

	delete[] A; //освобождение памяти
}