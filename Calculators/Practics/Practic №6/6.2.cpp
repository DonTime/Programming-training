#include <iostream>
using namespace std;
#include <cmath>


int main()
{
    setlocale(LC_ALL, "Rus");

    int diaposon[10] = { 10,-5,4,0,15,12,5,9,-4,8 };
    int min = diaposon[0];
    for (int i = 0; i < 10; ++i)
    {
        if (diaposon[i] < min and diaposon[i] >= 0)//определяем меньшее позитивное число
        {
            min = diaposon[i];
        }
    }
    cout << "" << min;

}