#include <iostream>
using namespace std;

int main() {
	
	double arr[9]; // объявление массива входных чисел
	int index = 0; // стартовый индекс
	int cnt = 0; // счётчик

	// заполнение массива значениями
	for (char ch = 'A'; ch <= 'U'; ch++, index++) {
		cout << "Insert element " << ch << ": " << endl;
		cin >> arr[index];
		
		if (ch == 'F') {
			ch = 'R';
		}
	}
	
	for (int i = 0; i <= 4; i+=2) {

		if (arr[6] * arr[i] + arr[7] * arr[i+1] + arr[8] > 0) {
			cnt++;
		}
		else if (arr[6] * arr[i] + arr[7] * arr[i + 1] + arr[8] < 0) {
			cnt--;
		}
		else {
			cout << "Wrong input parameters\n";
			break;
		}
	}


	if (cnt == -3 || cnt == 3) {
		cout << "Triangle belongs to one semispace\n";
	}
	else {
		cout << "Triangle doesn't belong to one semispace\n";
	}

}