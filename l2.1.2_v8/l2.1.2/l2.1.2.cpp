﻿#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Введите вещественное числа, а затем n - колличество цифр после запятой, вводите числа БЕЗ целой части, а также n не должно быть больше длинны дробной части!" << endl;
    float a;
    int temp, i, n;
    cin >> a >> n;
    temp = a;
    a -= temp; // убераем целую часть, если она есть
    for (i = 0; i < n; i++) {
        a *= 10; // выделяем из дробной части n первых числе, путём перемещения их в целуб часть
    }
    temp = a; // выделяем только целую часть числа
    n = temp % 10; // записываем последнюю цифру 
    temp /= 10; // отрезаем последнюю цифру числа
    while (temp != 0) { // пока число существует
        if (temp % 10 >= n) {
            cout << "Последовательность не возрастающая!";
            return 0; // если предыдущее число меньше плсдежующего, то последовательность убывает, а нам нужно наооброт, значит выводим текст и заверщаем прогу.
        }
        n = temp % 10;
        temp /= 10; // опять выделяем и отрезаем.
    }
    cout << "Последовательность возрастает"; // если прога дошла до этого места, то последовательность возрастает.
    return 0;
}
