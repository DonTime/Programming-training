#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL,"RUS");
	int a;
	float s,b,d,e,f;
	cout << "Введите A сторону для измерения площади правильного 6-угольника" << endl;
	cin >> a;
	d = sqrt(3);
	e = 3;
	b = (e * d* (a^2))/2;
	cout << "Площадь  =" << b  << endl;



}

