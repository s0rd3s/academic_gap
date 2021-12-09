#include <iostream>
using std::cin;
using std::cout;


int main() {
	setlocale(LC_ALL, "Russian");
	int k, l, m, n;
	cout << "Введите координаты ферзя\n";
	cin >> k >> l;
	if ((k <= 0 and k > 8) or (l <= 0 and l > 8)) { exit(2); }
	cout << "Введите координаты коня\n";
	cin >> m >> n;
	if ((m <= 0 and m > 8) or (n <= 0 and n > 8)) { exit(2); }
	if (k == m or k == n or l == m or l == n or (abs(k - m) == abs(l - n))) { cout << "Ферзь может побить коня\n"; }
	else cout << "Ферзь не может побить коня\n";
	if (((m + 2) == k and (n + 1 == l)) or ((m + 2) == k and (n - 1 == l)) or ((m - 2) == k and (n + 1 == l)) or ((m - 2) == k and (n - 1 == l)) or
		((m + 1) == k and (n + 2 == l)) or ((m + 1) == k and (n - 2 == l)) or ((m - 1) == k and (n + 2 == l)) or ((m - 1) == k and (n - 2 == l))) {
		cout << "Конь может побить ферзя\n";
	}
	else cout << "Конь не можит побить ферзя\n";
	if ((k == m + 2) and (l == n + 1) or (k == m - 2) and (l == n + 1) or (k == m - 2) and (l == n - 1) or
		(k == m + 1) and (l == n + 2) or (k == m - 1) and (l == n + 2) or (k == m - 1) and (l == n - 2) or (k == m + 1) and (l == n - 2) or (abs(k - m + 2) == abs(l - n + 1))
		or (abs(k - m + 2) == abs(l - n - 1)) or (abs(k - m - 2) == abs(l - n - 1)) or (abs(k - m - 2) == abs(l - n + 1)))
	{
		cout << "Если конь походит,то ферзь может его побить и наоборот";
	}
}