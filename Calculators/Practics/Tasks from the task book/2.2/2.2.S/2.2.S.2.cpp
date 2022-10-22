#include <iostream>
using namespace std;
/*Рассчитать надбавку к зарплате за стаж, если стаж от 2 до 5 лет, надбавка
составляет 2%, если стаж от 5 до 10 лет - 5%. Ввести с клавиатуры зарплату и стаж,
вывести надбавку и сумму к выплате
*/
int main() {
    setlocale(LC_ALL, "Russian");
    int ExpInYears, Salary, percent;
    cout << "Программа расчитывает оклад работника за выробатанный стаж," <<
        " от 2-5 лет 2%, дальнейшие значения 5%" << endl;
    cout << "Введите стаж и оклад через пробел или же по отдельности: ";
    cin >> ExpInYears >> Salary;
    if (ExpInYears < 2) {
        cout << "Оклад не изменился и равен " << Salary << " y.e.";
        return 0;
    }
    if (ExpInYears >= 5) {
        percent = (Salary / 100) * 5;
        cout << "Оклад этого работника равен: " << percent + Salary << " у.е.";
        return 0;
    }
    if (ExpInYears >= 2) {
        percent = (Salary / 100) * 2;
        cout << "Оклад этого работника равен: " << percent + Salary << " y.e.";
        return 0;
    }
}