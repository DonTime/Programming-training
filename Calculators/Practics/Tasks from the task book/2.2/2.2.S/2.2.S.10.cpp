#include <iostream>
using namespace std;
/*
Ввести с клавиатуры три числа, положительные
возвести в куб, а отрицательные заменить на 0.
*/

int main() {
    setlocale(LC_ALL, "Russian");
    float a, b, c;
    cout << "Программа берёт 3 числа плоложительные возводит в куб, а отрицательные заменяет на 0" << endl;
    cout << "Введите три числа: ";
    cin >> a >> b >> c;
    if (a < 0) {
        a = 0;
    }
    else a = pow(a, 3);
    if (b < 0) {
        b = 0;
    }
    else b = pow(b, 3);
    if (c < 0) {
        c = 0;
    }
    else c = pow(c, 3);
    cout << "Ответ:" << a << " " << b << " " << c;



}