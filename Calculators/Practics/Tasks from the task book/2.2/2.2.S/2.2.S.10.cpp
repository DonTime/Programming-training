#include <iostream>
using namespace std;
/*
������ � ���������� ��� �����, �������������
�������� � ���, � ������������� �������� �� 0.
*/

int main() {
    setlocale(LC_ALL, "Russian");
    float a, b, c;
    cout << "��������� ���� 3 ����� �������������� �������� � ���, � ������������� �������� �� 0" << endl;
    cout << "������� ��� �����: ";
    cin >> a >> b >> c;
    if (a < 0) {
        a = 0;
    }
    else a = pow(a, 3);
    if (b < 0) {
        b = 0;
    }
    else b = pow(b, 3);
    if (c < 0) {
        c = 0;
    }
    else c = pow(c, 3);
    cout << "�����:" << a << " " << b << " " << c;



}