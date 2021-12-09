#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;


using namespace std;

int main() {
	int s, t; // инициализируем целые переменные
	double x, ans; // инициализируем вещественную переменную с дврйной точностью от float
	cout << "Enter s, t, x:";
	cin >> s;
	cin >> t;
	cin >> x;
	ans = (pow(cos(pow(x, 2)), 3)) / (s * pow(x, 1 / t)); // решение уравнения #8
	cout << "Answer is : " << ans << endl;
};