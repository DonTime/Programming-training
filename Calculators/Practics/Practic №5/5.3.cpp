#include <iostream>
using namespace std;

/*������� �������� ���������� �������� ��������� ����� 8 ������, ���� � ����� �������
�������� ������� 30 ��/���., � � ����� �������� ������ �� 15% �� ����������.*/
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
	cout << "�� 8 ������ ������ ������� ��������: " << x;




}