#include <iostream>

using namespace std; //пространство имен стд

int& get_largest_number(int* array, int SIZE) //объявление функции, функция принимает указатель на массив и размерность массива, возвращает ссылку на максимальный элемент
{
	int i; //объявляем переменную
	int k; //объявляем переменную
	int max = array[0]; //присваиваем максимальному значению нулевой элемент массива
	for (i = 1; i < SIZE; i++) //идем по элементам массива
	{
		if (array[i] > max)//сравниваем с максимальным
		{
			max = array[i]; //присваиваем максимальному
			k = i; //номер максимального элемента равен
		}
	}
	int& MAX = array[k];//ссылка на максимальный элемент
	return MAX; //функция возвращает максимальный элемент, который был изменен
}

int main()
{
	int zero = 0; //инициализация 
	const int size = 5; //инициализация константы
	int a[size] = { 1,2,10,4,8 }; //инициализация массива
	cout << get_largest_number(a, size) << endl; //выводим максимальный
	get_largest_number(a, size) = zero; //заменяем максимальный элемент в массиве на 0
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " "; //выводим получившийся массив

	}
}