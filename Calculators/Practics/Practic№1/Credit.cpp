#include <iostream>
#include <conio.h>
using namespace std;

void main()
   
{
    setlocale(LC_ALL, "RUS");
    cout << "Визначення розмеру виплат для погашення кредиту"<<endl;
    cout << "Дано S=20000, N=5 лет, p = 12%" << endl;
    float s,p,n,v;//
    s = 20000,n = 5,p = 12;//Инициация чисел
    //Знайдти v
    v = (s * (1 + p / 100)) / n;
    cout << "Размер выплат для погашения кредита=" << v << endl;

    
}

