#include <iostream>
#include <cmath>


using namespace std;

int main() {
    setlocale(LC_ALL, "Russian"); 
    int n, j;
    float x, s;
    cout << "Введите n" << endl;
    cin >> n;
    cout << "По схеме Горнера!" << endl;
    for (x = 1; x <= 3.2; x += 0.2) {
        s = n;
        if (n % 2 != 0) {
            s *= -1;
        }
        for (j = n - 1; 1 <= j; j--) {
            s *= pow(x, 2);
            if (j % 2 == 0) {
                s += j;
            }
            else {
                s -= j;
            }
        }
        s *= pow(x, 2);
        s += 6;
        cout << "При х= " << x << " Сумма= " << s << " Операций сложения: " << n + 1 << " Умножения: " << n << endl;
    }
    cout << "Суммируя элементы!" << endl;
    for (x = 1; x <= 3.2; x += 0.2) {
        s = 0;
        for (j = n; 1 <= j; j--) {
            s += pow(-1, j) * j * pow(x, 2 * j);
        }
        s += 6;
        cout << "При х= " << x << " Сумма= " << s << " Операций сложения: " << n + 1 << " Умножения: " << n << endl;
    }
    return 0;
}
