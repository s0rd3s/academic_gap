//Мы берем массив из 9 элементов . Код строки 13-29 , мы сравниваем цифры числа на совпадения ( в десятичном виде)
// 29-45 перевод в 2 код и тоже сравнение.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	const int MAX = 1000000;
	for (int i = 1; i <= MAX; i++) {
		char N_10[8];

		int I = i;
		int j = 0;
		while (I > 0) {
			N_10[j] = I % 10 + 48;
			I /= 10;
			j++;
		}
		N_10[j] = 0;

		int NePal_10 = 0;
		for (int i = 0; i < j / 2; i++) { //24-29
			if (N_10[i] != N_10[j - 1 - i]) { // сравнивается первый с последним и тд
				NePal_10++;
				break;
			}
		}

		if (NePal_10 == 0) { //если число палиндром
			char N_2[21]; //массив для двоичной записи, 21 т.к. 10 в 6 степени
			int I = i;
			int j = 0;
			while (I > 0) { //перевод в двоичную запись
				N_2[j] = I % 2 + 48;
				I /= 2;
				j++;
			}
			N_2[j] = 0; // ?

			int NePal_2 = 0;
			for (int i = 0; i < j / 2; i++) { //24-29
				if (N_2[i] != N_2[j - 1 - i]) {
					NePal_2++;
					break;
				}
			}

			if (NePal_2 == 0) {
				cout << N_10 << " - " << N_2 << endl;
			}
		}
	}

	return 0;
}