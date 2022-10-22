#include <iostream>
using namespace std;
/*Ввести с клавиатуры два числа. Определить, что больше, сумма квадратов
или квадрат суммы этих чисел. Ответ вывести в виде сообщения.
*/
int main() {
    setlocale(LC_ALL, "Russian");
    int first, two, SumOfSqr, SqrOfsum;
    cout << "Программа определяет что больше, сумма квадратов числа или квадрат суммы из 2 чисел" << endl;
    cout << "Введите 2 числа по очереди или через пробел" << endl;
    cin >> first >> two;
    SumOfSqr = pow(first, 2) + pow(two, 2);//Сумма квадратов
    SqrOfsum = pow((first + two), 2);//квадрат суммы
    if (SumOfSqr > SqrOfsum) {
        cout << "Сумма квадратов чисел больше квадрат суммы";

    }
    else if (SumOfSqr < SqrOfsum) {
        cout << "Квадрат суммы больше чем сумма квадратов двух чисел";
    }
    else cout << "Квадрат суммы равен сумме квадратов";

    return 0;




}