#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	int rows;
	int cols;
	cout << "Введите количество строк : " << endl;
	cin >> rows;
	cout << "Введите количество столбцов :" << endl;
	cin >> cols;
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	int* sum = new int[cols];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 20;
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	int temp;
	int temp2;
	for (int j = 0; j < cols; j++)
	{
		sum[j] = 0;
		for (int i = 0; i < rows; i++)
		{
			sum[j] = sum[j] + arr[i][j];
		}
	}
	for (int i = 0; i < cols; i++)
	{
		cout << setw(3) << sum[i] << " ";
	}
	cout << endl;
	cout << endl;

	for (int i = 0; i < cols; i++)
	{
		for (int j = 0; j < cols - i; j++)
		{
			if (sum[j] <= sum[j + 1])
			{
				temp = sum[j];
				sum[j] = sum[j + 1];
				sum[j + 1] = temp;
				for (int k = 0; k < rows; k++)
				{
					temp2 = arr[k][j];
					arr[k][j] = arr[k][j + 1];
					arr[k][j + 1] = temp2;
				}
			}
		}
	}

	for (int i = 0; i < cols; i++)
	{
		cout << setw(3) << sum[i] << " ";
	}
	cout << endl;
	cout << endl;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < rows; i++)
		delete[] arr[i];
	delete[] arr;
	delete[] sum;
}