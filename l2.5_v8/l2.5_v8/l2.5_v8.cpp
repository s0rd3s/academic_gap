#include <iostream>


using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int k = 1, a, maxk = 0;
    bool temp = false;
    cout << "Вводите числа, последнее число обязательно должно быть - 0" << endl;
    cin >> a;
    if (a == 0) { // Если первое ноль, то последовательность 0;
        cout << 0;
        return 0;
    }
    if (a > 0) {
        temp = true; // Если bool  = true - положительное, иначе отрицательное
    }
    while (a != 0) {
        cin >> a;
        if (temp) {
            if (a > 0) {
                k++;
            }
            else {
                if (k > maxk) {
                    maxk = k;
                    k = 1;
                }
                temp = false;
            }
        }
        else {
            if (a < 0) {
                k++;
            }
            else {
                if (k > maxk) {
                    maxk = k;
                    k = 1;
                }
                temp = true;
            }
        }
    }
    cout << maxk;
    return 0;
}
