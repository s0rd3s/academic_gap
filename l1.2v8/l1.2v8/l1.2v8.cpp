#include <iostream>

using namespace std;


int main() {
    double R, x, y;
    cout << "Enter Radius, x, y:" << endl;
    cin >> R;
    cin >> x;
    cin >> y;
    if (y <= x && x > 0)
    {
        pow((x - R), 2) + pow((y - R), 2) <= pow(R, 2);
        cout << "x and y are belong to 1st quarter of graph" << endl;
    }
    else if (y >= x && x < 0)
    {
            pow((x + R), 2) + pow((y + R), 2) <= pow(R, 2);
            cout << "x and y are belong to 3st quarter of graph" << endl;
    }
    else cout << "x and y aren't belong to chosen parts of graph" << endl;
    system("pause");
    return 0;
}