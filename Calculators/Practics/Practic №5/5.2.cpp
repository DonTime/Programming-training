#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	int x, n;
	cout << "��������� �� ������ ������ ���������� �����: " << endl;
	cout << "������� ����� ������: ";
	cin >> x;
	if (x > 12) {
		cout << "���� ����� ������ ��� ������� � ����";
		return 0;
	}
	n = x % 12;
	cout << n;
	if (n >= 0 and n <= 2) {
		cout << "������� ����� ������" << endl;
	}
	if (n >= 3 and n <= 5) {
		cout << "������� ����� ��������" << endl;
	}
	if (n >= 6 and n <= 8) {
		cout << "������� ����� ������" << endl;
	}
	if (n >= 9 and n <= 11) {
		cout << "������� ����� �������" << endl;
	}

}