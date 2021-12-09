#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");
	const int MAX = 1001; //// глобальная переменная, размерность строки
	char Array[MAX], New_Array[MAX]; //объявление чаровского массива размерностью мах
	int N_New_Array = 0;
	cout << "Введите строку" << endl;
	cin.get(Array, MAX); //функция посимвольного ввода строки

	int Sum = 0; //длина массива
	while (Array[Sum] != '\0') { //пока эрэй сам не будет равен символу конца строки
		Sum++; ////считаем кол-во элементов, определяем длину массива
	}

	for (int i = 0; i <= Sum; i++) { //идем по длине массива

		if (Array[i] != 32 && Array[i] != 46 && Array[i] != 44 && Array[i] != 58 && Array[i] != 59 && Array[i] != 33 && Array[i] != 63 && Array[i] != 45 && Array[i] != 40 && Array[i] != 41 && Array[i] != 0) { //проверка чтобы слово не начиналась на пробел точку запятую и тд (находим начало слова)

			int Word_Lenght = 1;
			i++;

			while (Array[i] != 32 && Array[i] != 46 && Array[i] != 44 && Array[i] != 58 && Array[i] != 59 && Array[i] != 33 && Array[i] != 63 && Array[i] != 45 && Array[i] != 40 && Array[i] != 41 && Array[i] != 0) { //проверка на конец слова (т.е. длина слова)
				i++;
				Word_Lenght++;
			}

			int Povtor = 0;


			char Word[1001]; //создали новый массив
			int k = 0;
			for (int j = i - Word_Lenght; j <= i; j++) {
				Word[k] = Array[j]; //Найденое слово , мы переприсваеваем в новый массив
				k++;
			}
			Word[k] = 0;


			for (int j = 0; j < k; j++) { //44-46 находим кол во повторений внутри нового массива
				char Symbol = Word[k];
				int Kol_vo = 1;

				for (int r = j + 1; r < k; r++) { //сравниваем элемент со следующим
					if (Word[j] == Word[r]) { //если они равны
						Kol_vo++; //кол во увеличивается

						for (int l = r; l < Sum; l++) {
							Word[l] = Word[l + 1];
						}
						r--;
						k--;
					}
				}

				if (Kol_vo != 1) {
					Povtor += Kol_vo;
				}
			}


			if (Povtor > Word_Lenght - Povtor) {
				for (int n = N_New_Array, j = i - Word_Lenght; j <= i; n++, j++) {
					New_Array[n] = Array[j];
				}
				N_New_Array += Word_Lenght + 1;
			}
		}
	}

	New_Array[N_New_Array] = 0;
	cout << "Новая строка - " << New_Array << endl;

	return 0;
}