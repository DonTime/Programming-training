#include <iostream>
using namespace std;
/*
������ � ���������� �������� ���� ������ ������������ a, b � c � ����������,
�������� �� �� �������������. ����� ������� � ���� ���������.
*/
int Checker(int A, int B, int C) {// ������� ������������
    float  AB, AC;
    AB = pow(A, 2);
    AC = pow(B, 2) + pow(C, 2);
    if (AB == AC) {
        cout << "����������� �������������";
    }
    else {
        cout << "����������� �� �������������.";
    }
    return 0;

}
int main() {
    setlocale(LC_ALL, "Russian");
    float x, y, z, AB, AC;
    cout << "��������� ���������� �������� �� ����������� �������������" << endl;
    cout << "������� 3 ������� ������������ ����� ������ ��� �� �����������: ";
    cin >> x >> y >> z;
    if (x > y && x > z) {
        Checker(x, y, z);
        return 0;
    }
    else if (y > x && y > z) {
        Checker(y, x, z);
        return 0;
    }
    else if (z > y && z > x) {
        Checker(z, y, x);
        return 0;
    }
    else {
        cout << "����������� �� �������������.";
    }


}