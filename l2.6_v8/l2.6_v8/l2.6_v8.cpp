﻿#include <iostream>
#include <cmath>


using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int i, ans, a1 = 1, temp, a2 = 1, a3, k, k1;
    cin >> k;
    if (k == 1 || k == 2) { // Если нужно вывести первые два числа Фибоначчи
        cout << 1;
        return 0;
    }
    k -= 2; // Так как для 2-х первых мы уже сделали
    while (k != 0) {
        a3 = a1 + a2; // Вычесление некс числа 
        temp = a3;
        k1 = 0;
        while (temp != 0) {
            temp /= 10;
            k1++; // Считаем сколько знаков оно занимает
        }
        if (k - k1 <= 0) { // Проверяем, нужно ли нам это число
            ans = a3 / pow(10, (k - k1) * (-1)); // Если нам оно нужно, пример приведу ниже, то мы смотрим какое по счёту нам нужно и возводим 10 в такую степень 
            cout << ans % 10; // Поясню ниже
            return 0;
        }
        else {
            k -= k1; // Если нам не нужно число, то просто отнимаем количество цифр, которое оно занимает.
        }
        a1 = a2;
        a2 = a3;
    }
    return 0;
}
// Пример:
// Допустим нам нужно найти 17 цифру. Ряд Фибоначчи 1 1 2 3 5 8 13 21 34 55 89 144 233 377. 17 цифра это 1(входит в число 144). Как мы её ищем?
// Смотрим на 1 число - это один, оно занимает одну клеточку, значит 17-1, получим 16, такие же действия с 1 2 3 5 8Э дальше, смотрим на 13 
// оно занимает 2 клеточки, значит после 8 у нас осталось 10, следует 10-2 равно 8, думаю понятно с этим...
// Когда мы дойдём до 144, оно занимает 3 клеточки, у нас осталось 1, следует из неравенство в строке 24(код) выполняется 1-3=-2, -2 меньше 0
// значит нам нужно найти |1-3| справа начиная отсчёт с 0, получится, нам нужно 3-ю цифру справа, это 1, значит, нам нужно разделить 144 на 100.
// Теперь с допустим 18 цифра. после преобразований(попробуй сама посчитай) У нас получиться |2-3|, значит нужно 2 цифра справа, 144 нужно разделить на 10,но
// если мы нацело разделим на 10, получим 14, а нужно 4, по этому мы берём ТОЛЬКО последнюю цифру после деления нацело (строчка 26 кода) там я %10. 