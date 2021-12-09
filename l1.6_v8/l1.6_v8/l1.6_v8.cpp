#include <iostream>
using namespace std;

int main()
{   
    int bit_num_arr[3] = { 0,7,15 };
    unsigned int number, inv1, inv2;

    cout << "Type number" << endl; 
    cin >> number;

    cout << sizeof(number) << endl;
    // берем номер бита из массива и сдвигаем исходное число на номер бита, затем делаем логическое побитовое И с единицей
    cout << "Vaule of bit number " << bit_num_arr[0] << " - " << ((number >> bit_num_arr[0]) & 1) << endl;
    cout << "Vaule of bit number " << bit_num_arr[2] << " - " << ((number >> bit_num_arr[2]) & 1) << endl;


    // инвертировать биты 7 и 15

    // инвертируем исходное число, сдвигаем вправо, получаем значение инвертированного бита, сдвигаем полученное влево и делаем XOR на наше число
    inv1 = number ^ (((~number >> bit_num_arr[1]) & 1) << bit_num_arr[1]);
    inv2 = number ^ (((~number >> bit_num_arr[2]) & 1) << bit_num_arr[2]);

    cout << inv1 << "; " << inv2 << endl;

}