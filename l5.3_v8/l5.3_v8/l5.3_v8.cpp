#include <iostream>
#include <cmath>

using namespace std;

//Считает количество слов в тексте
int N_Word(char* Array) {//объявление функции 

	int N = 0;
	int Sum = 0;
	while (Array[Sum] != '\0') {
		Sum++; //определяем длину массива
	}

	char Word[1001];
	for (int i = 0; i <= Sum; i++) {
		//Находим начало слова
		if (Array[i] != 32 && Array[i] != 46 && Array[i] != 44 && Array[i] != 58 && Array[i] != 59 && Array[i] != 33 && Array[i] != 63 && Array[i] != 45 && Array[i] != 40 && Array[i] != 41 && Array[i] != 0) {

			int Word_Lenght = 1;
			i++;

			//Находим длинну слова
			while (Array[i] != 32 && Array[i] != 46 && Array[i] != 44 && Array[i] != 58 && Array[i] != 59 && Array[i] != 33 && Array[i] != 63 && Array[i] != 45 && Array[i] != 40 && Array[i] != 41 && Array[i] != 0) {
				i++;
				Word_Lenght++;
			}
			N++;
		}
	}

	return N;//кол-во слов
}

//Выделяет слова в тексте
char Word(char* Array, int N) {//объявление функции  передаем указатель и кол-во слов

	int Sum = 0, j = 0;
	while (Array[Sum] != '\0') {
		Sum++; //считаем длину массива
	}
	for (int i = 0; i < Sum; i++) {

		//Находим начало слова
		if (Array[i] != 32 && Array[i] != 46 && Array[i] != 44 && Array[i] != 58 && Array[i] != 59 && Array[i] != 33 && Array[i] != 63 && Array[i] != 45 && Array[i] != 40 && Array[i] != 41 && Array[i] != 0) {

			int Word_Lenght = 1;
			i++;
			j++;

			//Находим длинну слова
			while (Array[i] != 32 && Array[i] != 46 && Array[i] != 44 && Array[i] != 58 && Array[i] != 59 && Array[i] != 33 && Array[i] != 63 && Array[i] != 45 && Array[i] != 40 && Array[i] != 41 && Array[i] != 0) {
				Word_Lenght++;
				i++;
			}

			if (j == N) {
				for (int j = 0; j < Word_Lenght; j++) {
					Array[j] = Array[i - Word_Lenght + j]; // записываем в новый массив выделеное слово
				}
				Array[Word_Lenght] = 0;
				break;
			}
		}
	}

	return *Array;
}

//Составляет из слов двумерный массив (список)
char Spisok(char** New_Array, char* Array) {
	char  Word_N[1001];

	for (int i = 0; i < N_Word(Array); i++) {

		int j = 0;
		while (Array[j] != 0) {
			Word_N[j] = Array[j];
			j++;
		}
		Word_N[j] = 0;

		Word(Word_N, i + 1);

		j = 0;
		while (Word_N[j] != 0) {
			New_Array[i][j] = Word_N[j];
			j++;
		}
		New_Array[i][j] = 0;
	}

	return **New_Array;
}


//Сортирует двумерный массив по первой букве
char Sortirovka(char** New_Array, int N_Word) {
	for (int i = N_Word; i > 0; i--) {
		for (int j = i + 1; j < N_Word; j++) {
			if (New_Array[i][0] > New_Array[j][0]) {
				swap(New_Array[i], New_Array[j]);
			}
		}
	}

	return **New_Array;
}


//Преобразует отсортированный двумерный массив в одномерный
char Preobrazovanie(char** New_Array, int N_Word, char* Array2) {
	int N = 0;
	for (int i = 0; i < N_Word; i++) {
		int j = 0;
		while (New_Array[i][j] != 0) { //116-119 заполнение слов одномерного массива
			Array2[N] = New_Array[i][j];
			j++;
			N++;
		}
		Array2[N] = 32; //ставится пробел после слов
		N++;
	}
	Array2[N] = 0;

	return *Array2;
}


int main() {
	const int MAX = 1001;
	char* Word_N = new char[MAX];//выделение памяти
	char* Array = new char[MAX];
	char* Array2 = new char[MAX];
	cout << "Enter the string" << endl;
	cin.get(Array, MAX);

	char** New_Array = new char* [MAX];
	for (int i = 0; i < MAX; i++)
		New_Array[i] = new char[MAX];

	Spisok(New_Array, Array);

	Sortirovka(New_Array, N_Word(Array));

	Preobrazovanie(New_Array, N_Word(Array), Array2);
	cout << Array2;
}
