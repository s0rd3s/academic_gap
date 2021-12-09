#include <iostream>


using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float temp, s = 0, x, temp2;
    int i, temp1, k = 1;
    cout << "Введите х" << endl;
    cin >> x;
    do {
        if (k % 2 == 0) { // Вычесляем -1 в степеги k
            temp = 1;
        }
        else {
            temp = -1;
        }
        temp2 = 1;
        for (i = 0; i < 2 * (k + 1); i++) { // Возводим x/2 в степень 2*(k+1)
            temp2 *= x / 2;
        }
        temp *= temp2;
        temp2 = 1;
        for (i = 2; i <= k + 1; i++) { // Факториал (k+1)
            temp2 *= i;
        }
        temp /= temp2 * temp2;
        s += temp;
        k++;
        temp1 = temp * 1000000;
    } while (temp1 != 0);
    cout << "Сумма равна " << s << " Количество слогаемый равно " << k;
    return 0;
}
