#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	int number, number1, number2, number3;//��������� �����
	cout << "������� 3-� ������� ����� ��� ������������ 3 � 2 �����: ";//�������� ������������ � ����
	cin >> number;//������������ ����� � ����

	if ((number > 99) && (number < 1000))
	{//�������� �� �� �������� �� ����� 3-� �������
		number1 = number % 10; 
		number2 = (number % 100 - number1) / 10;
		number3 = (number - number % 100) / 100;
		cout << "���� ����� ���: " << number3 << number1 << number2;//������ ������������ ���������, ������ ��� ���������� ����� 
	}
	else {
		(cout << "�� ����� �� 3-� ������� �����, ������ 123, 546, 345.\n ���������� ������ ����� �����, � � ��� ���� :)");//������������ �� ���������, ���������� ������������ �� ����� :)
	 }
}