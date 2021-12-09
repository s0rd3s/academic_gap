#include <iostream>
#include <string.h>
using namespace std;

char* zamena(char* str, char* string, char st, int k, int p); //объявление функции

int main()
{
	const int max = 255;
	char s[max], s1, S[max] = { '\0' };
	char* strr;
	int kol = 1, poz, kol_max, y = 0;
	cin.getline(s, max);
	kol_max = strlen(s);//фунция для строки которая показыват кол-во элментов в строке 
	strcpy_s(S, kol_max + 1, s); //копируем s в S (kol max +1 - размерность массива S)
	for (int i = 1; i <= kol_max; i++)
	{
		if (s[i] == s[i - 1]) //если элемент равен предыдущему
		{
			kol++;
		}
		else
		{
			kol = 1;
		}
		if (kol == 3)
		{
			poz = i - 2; //первый из трех эл-ов
			s1 = s[i]; //создаем подстроку s1
			strr = zamena(s, S, s1, kol_max, poz);
			kol = 1;
			kol_max = kol_max + 2; //т.к добавили 2 элемента
			i = i + 4; //пропускаем 5 элементов
			strcpy_s(s, kol_max + 2, S); //копируем S в s (kol max +2 - размерность массива s)
		}
	}
	cout << "Result- " << s;
}

char* zamena(char* str, char* string, char st, int k, int p) //
{
	int r = 0, e = 0, w = 0;
	if (p != 0)
	{
		for (int i = 0; i < p; i++)
		{
			string[i] = str[i];
			r = i + 1;
		}
	}
	for (int i = r; i < r + 5; i++)
	{
		string[i] = st;
		e = i + 1;
	}
	if (str[e - 2] != '\0')
	{
		for (int i = e; i < k + 2; i++)
		{
			string[i] = str[e - 2];
			e++;
			w = i + 1;
		}
		string[w] = '\0';
	}
	else
	{
		string[e] = '\0';
	}
	return string;
}