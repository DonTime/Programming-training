#include <iostream>
using namespace std;
/*
---------------------------------------------------------
   Из случайных чисел от -7 до 12 сделать квадратную
   матрицу  размер  которой  задается  с клавиатуры,
   напечатать её ввиде таблицы и изменить все элементы
   над главной диагональю на 0. Результат вывести на экран
----------------------------------------------------------
*/
int main()
{
    setlocale(LC_ALL, "");
    int  number_amount, max, min, k = 1;
    cout << "Введите размер матрицы целым числом: ";
    cin >> number_amount;
    if (k - number_amount == 0) {
        k = 0;
    }
    max = 12, min = -7;
    int** Spisok = new int* [number_amount];
    srand(time(NULL));
    for (int i = 0; i < number_amount; i++) {
        Spisok[i] = new int[number_amount];
    }
    max = -20, min = -20;
    for (int i = 0; i < number_amount; i++) {//вывод матрицы на консоль
        for (int j = 0; j < number_amount; j++) {
            Spisok[i][j] = rand() % max + min;
        }
        if (k > 0) {
            Spisok[i][k] = 0;
            k++;
        }
        for (int j = 0; j < number_amount; j++) {
            cout << Spisok[i][j] << "\t";
        }

        cout << endl;
    }
    delete[] Spisok;
}