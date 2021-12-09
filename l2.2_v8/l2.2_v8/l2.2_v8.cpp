#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float x, temp1, cos1, sin1;
    int k1, k2, temp, i;
    for (x = 0; x <= 6.2; x += 0.1) { // проходимся по х с 0 до 6.2 с шагом 0.1
        k1 = 0;
        cos1 = 0;
        temp = 1;
        while (temp != 0) {
            temp1 = pow(-1, k1) * pow(x, k1 * 2);
            for (i = 2; i <= k1 * 2; i++) {
                temp1 /= i;
            }
            cos1 += temp1;
            temp = temp1 * 1000000;
            k1++;
        }
        k2 = 0;
        sin1 = 0;
        temp = 1;
        while (temp != 0) {
            temp1 = pow(-1, k2) * pow(x, (k2 * 2) + 1);
            for (i = 2; i <= (k2 * 2) + 1; i++) {
                temp1 /= i;
            }
            sin1 += temp1;
            temp = temp1 * 1000000;
            k2++;
        }
        cout << "Для x=" << x << "cos(x)+sin(x)= " << sin1 + cos1 << endl;
    }
    return 0;
}
