#include <iostream>
using namespace std;
/*
Ввести с клавиатуры значения трех сторон треугольника a, b и c и определить,
является ли он прямоугольным. Ответ вывести в виде сообщения.
*/
int Checker(int A, int B, int C) {// функция определитель
    float  AB, AC;
    AB = pow(A, 2);
    AC = pow(B, 2) + pow(C, 2);
    if (AB == AC) {
        cout << "Треугольник прямоугольный";
    }
    else {
        cout << "Треугольник не прямоугольный.";
    }
    return 0;

}
int main() {
    setlocale(LC_ALL, "Russian");
    float x, y, z, AB, AC;
    cout << "Программа определяет является ли треугольник прямоугольным" << endl;
    cout << "Введите 3 стороны треугольника через пробел или по отдельности: ";
    cin >> x >> y >> z;
    if (x > y && x > z) {
        Checker(x, y, z);
        return 0;
    }
    else if (y > x && y > z) {
        Checker(y, x, z);
        return 0;
    }
    else if (z > y && z > x) {
        Checker(z, y, x);
        return 0;
    }
    else {
        cout << "Треугольник не прямоугольный.";
    }


}