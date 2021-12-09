#include <iostream>
using namespace std;

int main() {
    int number, k;

    cout << "Enter number:" << endl;
    cin >> number;

    cout << "Enter number of digit recurrences (K) to check:" << endl;
    cin >> k;
     
    for (int i = 0; i <= 9; i++) {
        int counter = 0;
        int temp_number = number;
        
        while (temp_number != 0) { // Итерируем по каждой цифре в числе
            if (temp_number % 10 == i) { // проверяем равна ли последняя цифра числа i, i изменяется от 0 до 9, то есть смотрим повторения всех чисел
                counter++;
            }

            if (counter >= k) {
                cout << "There are K or more recurrences of digit in typed number";
                return 0; // Если повторений столькоже сколько k, значит выводим текст и выключаем програму
            }

            temp_number /= 10; // отрезаем последнее число
        }
    }
    cout << "There are less then K recurrences of digit in typed number"; // Если програма дошла до этого места, то повторений меньше k, так как 19 строчка при равном k выключает программу
    return 0;
}
