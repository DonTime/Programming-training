#include <iostream>
using namespace std;

/*Скласти програму визначення швидкості автомобілю через 8 секунд, якщо в першу секунду
швидкість дорівнює 30 км/год., а у кожну наступну зростає на 15% від попередньої.*/
int main()
{
	setlocale(LC_ALL, "Russian");
	float x, n, procent;
	x = 30;
	n = 7;
	while (n > 0) {
		n = n - 1;
		procent = (x / 100) * 15;
		x = procent + x;
	}
	cout << "За 8 секунд машина набрала скорость: " << x;




}
