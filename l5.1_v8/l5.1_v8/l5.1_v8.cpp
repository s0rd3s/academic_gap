#include <iostream>
#include <iomanip>

using namespace std;

int Snake(int** Array, int Por_Mat) {
	int Och = 1;

	for (int k = 0; k <= (Por_Mat - 1) / 2; k++) {

		for (int j = Por_Mat - 1 - k; j >= k; j--) {
			Array[k][j] = Och;
			Och++;
		}

		for (int i = k + 1; i <= Por_Mat - 1 - k; i++) {
			Array[i][k] = Och;
			Och++;
		}

		for (int j = k + 1; j <= Por_Mat - 1 - k; j++) {
			Array[Por_Mat - 1 - k][j] = Och;
			Och++;
		}

		for (int i = Por_Mat - 2 - k; i >= k + 1; i--) {
			Array[i][Por_Mat - 1 - k] = Och;
			Och++;
		}

	}

	return *(*(Array));
}


int main() {
	cout << "Vvedite poryadok matricy" << endl;
	int Por_Mat;
	cin >> Por_Mat;

	int** Array = new int* [Por_Mat]; //выделяем массив из указателей
	for (int i = 0; i < Por_Mat; i++)
		Array[i] = new int[Por_Mat]; //выделение памяти

	Snake(Array, Por_Mat);

	for (int i = 0; i < Por_Mat; i++) { //вывод
		for (int j = 0; j < Por_Mat; j++) {
			cout << setw(4) << Array[i][j];
		}
		cout << endl;
	}

	return 0;
}