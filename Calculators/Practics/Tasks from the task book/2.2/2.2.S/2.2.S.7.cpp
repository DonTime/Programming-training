#include <iostream>
using namespace std;
/*
������ � ���������� ���������� ����� �(x,y) � ���������� ����� ��
������ ����� ������ ���������� ������� R. ������� ���������� �������� ������ ���������. ����� ������� � ���� ���������.
*/

int main() {
    setlocale(LC_ALL, "Russian");
    int x, y, R, g;
    cout << "��������� ����������  ����� �� ����� �(x,y) � ������� ���������� ��� ���." << endl;
    cout << "������� ���������� �����: ";
    cin >> x >> y;
    cout << "������� ������: ";
    cin >> R;
    g = sqrt(x * x + y * y);
    if (g < R) {
        cout << "����� ����������� �����";
    }
    else cout << "����� �� ����������� �����";


}