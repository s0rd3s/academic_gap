#include <iostream>
using namespace std;

int main()
{
    int x1, x2, x3, x4;

    cout << "Type x1, x2, x3, x4" << endl;                  // x1 < x2 > x3 > x4
    cin >> x1 >> x2 >> x3 >> x4;
    cout << "You have typed this numbers:" << x1 << " " << x2 << " " << x3 << " " << x4 << endl;
    if (x2 < x4) std::swap(x2, x4);
    if (x2 < x1) std::swap(x2, x1);
    if (x1 < x3) std::swap(x1, x3);
    cout << "Numbers with changed places:" << x1 << " " << x2 << " " << x3 << " " << x4 << " " << endl;
}