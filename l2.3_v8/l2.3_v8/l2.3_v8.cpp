#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int i, j;
    bool a;
    for (i = 1001; i < 9999; i++) { // перебераем все 4-х значные числа
        a = true;
        if (i / 1000 + (i / 100) % 10 == i % 10 + (i % 100) / 10) { // смотрим равла ли сумма 2-х первых, 2-м последним
            for (j = 2; j < i / 2 + 1; j++) { // проверяем простое ли оно
                if (i % j == 0) {
                    a = false; // если есть делитель, значит оно не простое
                }
            }
            if (a) {
                cout << i << endl; // выводим, если оно простое
            }
        }
    }
    return 0;
}
