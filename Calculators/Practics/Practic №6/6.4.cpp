#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");

    const int n = 15;
    double a[n];
    double max = 0;
    int indx = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Введите элемент массива № " << i + 1 << "= ";
        cin >> a[i];
        if (a[i] > max)//определяем максимум в массиве
        {
            max = a[i];
        }
    }
    for (int i = 0; i < n; i++) {//отдельный цикл прогоняем числа по кругу сравнивая с максимумом, если есть такие же числа то увеличиваем индекс на 1
        if (a[i] == max) {
            ++indx;
        }
    }

    cout << "Значение максимального элемента: " << max << endl;
    cout << "Кол-во одинаковых максимальных элементов: " << indx << endl;

}
