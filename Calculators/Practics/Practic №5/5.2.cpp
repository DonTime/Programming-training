#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	int x, n;
	cout << "Программа по номеру месяца определяет сезон: " << endl;
	cout << "Введите номер месяца: ";
	cin >> x;
	if (x > 12) {
		cout << "Ваше число больше чем месяцев в году";
		return 0;
	}
	n = x % 12;
	cout << n;
	if (n >= 0 and n <= 2) {
		cout << "Введёный месяц Зимний" << endl;
	}
	if (n >= 3 and n <= 5) {
		cout << "Введёный месяц Весенний" << endl;
	}
	if (n >= 6 and n <= 8) {
		cout << "Введёный месяц Летний" << endl;
	}
	if (n >= 9 and n <= 11) {
		cout << "Введёный месяц Осенний" << endl;
	}

}
