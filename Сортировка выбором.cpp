#include <iostream>
#include <ctime>
#include <random>
using namespace std;

int minn, t, i, j, n;

void Choice(int A[], int n)
{
	minn = 0; // для записи минимального значения
	t = 0; // для обмена значениями 

	for (i = 0; i < n; i++)
	{
		minn = i; // запомним номер текущей ячейки, как ячейки с минимальным значением

		// в цикле найдем реальный номер ячейки с минимальным значением
		for (j = i + 1; j < n; j++)
		{
			if (A[j] < A[minn])
				minn = j;
		}

		// cделаем перестановку этого элемента, поменяв его местами с текущим
		if (i != minn)
		{
			t = A[i];
			A[i] = A[minn];
			A[minn] = t;
		}
	}

	for (i = 0; i < n; i++)
		cout << A[i] << " "; //вывод массива

	cout << endl;
}

int main()
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

	Choice(A, n);

	delete[] A; //освобождение памяти
}