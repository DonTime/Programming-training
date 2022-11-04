#include <iostream>
using namespace std;
#include <cmath>


int main()
{
    setlocale(LC_ALL, "Rus");

    int diaposon[15] = { 10,-5,4,2,5,-10,5,9,-4,1,3,-7,-3,1,-6 };
    for (int i = 0; i < 15; ++i)
    {
        if (diaposon[i] % 5 == 0)//определяем кратные числа в массиве
        {
            cout << diaposon[i] << endl;
        }
    }



}