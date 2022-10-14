#include <iostream>
#include <cmath>
using namespace std;
/*Скласти програму визначення функції з перевіркою існування рішення. 
Значення а – випадкове число від -3 до 20, х задається з клавіатури 
y= (a*√3-1,56*x-3)/(x*sin(x) */
int main()
{
    setlocale(LC_ALL, "RUS");
    float number, answer, y, x, part2;
    int a;
    answer = 0;
    number = 0;
    cout << "Введите число x: ";
    a = rand();
    cin >> x;
    part2 = x * sin(x);
    if ((part2 != 0) and (a != 0)) {
        y = ((a * sqrt((3 * a) - (1, 56 * x)) - 3) / part2);
        cout << "Функция равна = " << y;
        return 0;
    }
    else {
        cout << "Ошибка деления на 0";
        return 0;
    }
}