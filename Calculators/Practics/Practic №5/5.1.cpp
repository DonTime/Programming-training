#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	cout << "Введите значение х: ";
	cin >> x;
	if (-3 < x) {
		cout << "Значение 1: " << 15 * sin(x) << endl;
	}
	if (x < 0) {
		cout << "Значение 2: " << 2 * x * sin(x) << endl;

	}
	if (x > 7) {
		cout << "Значение 3: " << pow(x, 3) - 2 + 7 * pow(x, 2) << endl;
	}


}
