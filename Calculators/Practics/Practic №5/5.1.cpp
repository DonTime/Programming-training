#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	cout << "Введите значение аргумента: ";
	cin >> x;
	if (-3 < x) {
		cout << "Значение аргумента №1: " << 15 * sin(x) << endl;
	}
	if (x < 0) {
		cout << "Значение аргумента №3: " << 2 * x * sin(x) << endl;

	}
	if (x > 7) {
		cout << "Значение аргумента №3: " << pow(x, 3) - 2 + 7 * pow(x, 2) << endl;
	}


}