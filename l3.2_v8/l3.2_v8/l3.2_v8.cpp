#include <iostream>

//prostranstvo imen std
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n = 0;
	int a;
	cout << " Введите количество элементов ";
	cin >> n;
	int* A = new int[n]; //sozdanie dinamicheskogo massiva A razmera n
	int* B = new int[n]; // sozdanie dinamicheskogo massiva B razmera n
	//zapolnenie massiva A
	for (int i = 0; i < n; i++)
	{
		cout << " Введите элемент массива ";
		cin >> a;
		A[i] = a;
	}
	//zapolnenie massiva B
	for (int i = 0; i < n; i++)
	{
		int k = 0;
		for (int j = i + 1; j < n; j++)
		{

			if (A[i] >= A[j])
			{
				k++;
			}
		}
		B[i] = k;
	}
	//cicl vivoda massiva B
	for (int i = 0; i < n; i++) {
		cout << B[i] << endl;
	}

	//Ochistka memory
	delete[] A;
	delete[] B;

	system("pause");
}