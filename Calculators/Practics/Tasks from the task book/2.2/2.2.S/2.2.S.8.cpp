#include <iostream>
using namespace std;
/*
������ � ���������� �������� ������ ���� ������������� a1,b1,c1 �
a2,b2,c2. ����������, ������� ������ ������������ � ����������. �����
������� � ���� ���������.
*/

int main() {
    setlocale(LC_ALL, "Russian");
    float a1, b1, c1, a2, b2, c2, S1, S2, P1, P2;
    cout << "��������� ���������� � ������ �� ���� ������������� ������� ����������" << endl;
    cout << "������� ��� ������� ������� ������������: ";
    cin >> a1 >> b1 >> c1;
    cout << "������� ��� ������� ������� ������������: ";
    cin >> a2 >> b2 >> c2;
    P1 = (a1 + b1 + c1) / 2;
    P2 = (a2 + b2 + c2) / 2;
    S1 = sqrt(P1 * (P1 - a1) * (P1 - b1) * (P1 - c1));
    S2 = sqrt(P2 * (P2 - a2) * (P2 - b2) * (P2 - c2));
    if (S1 > S2) {
        cout << "������� ������� ������������ ������ �������";
    }
    else if (S1 = S2) {
        cout << "� ������������� ���������� �������";
    }
    else {
        cout << "������� ������� ������������ ������ �������";
    }

}