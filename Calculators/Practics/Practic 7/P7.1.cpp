#include <iostream>
using namespace std;
/*
-------------------------------------------------
Дано масив размера N. Написать программу которая
выводит на экран сначала его элементы с чётными
индексами,а потом с нечётными
-------------------------------------------------
*/
int main()
{
    setlocale(LC_ALL, "");
    int number_amount, numb;
    cout << "Введите размер массива: ";
    cin >> number_amount;
    int* Spisok = new int[number_amount];
    //заполнение масива числами которые вводит пользователь
    for (int i = 0; i < number_amount; i++) {
        cin >> numb;
        Spisok[i] = numb;
    }

    cout << "Числа по чётным индексам: ";
    //вывод чисел с чётным индексом
    for (int i = 0; i < number_amount; i++) {
        numb = Spisok[i];
        if (i % 2 == 0) {
            cout << numb << " ";
        }
    }
    cout << endl;
    cout << "Числа по нечётным индексам: ";
    //вывод чисел с нечётным индексом
    for (int i = 0; i < number_amount; i++) {
        numb = Spisok[i];
        if (i % 2 == 1) {
            cout << numb << " ";
        }
    }
    //удаление масива и завершение программы
    delete[] Spisok;
    return 0;
}
