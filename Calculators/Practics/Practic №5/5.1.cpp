#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	cout << "������� �������� ���������: ";
	cin >> x;
	if (-3 < x) {
		cout << "�������� ��������� �1: " << 15 * sin(x) << endl;
	}
	if (x < 0) {
		cout << "�������� ��������� �3: " << 2 * x * sin(x) << endl;

	}
	if (x > 7) {
		cout << "�������� ��������� �3: " << pow(x, 3) - 2 + 7 * pow(x, 2) << endl;
	}


}