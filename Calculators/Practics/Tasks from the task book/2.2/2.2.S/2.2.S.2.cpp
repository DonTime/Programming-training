#include <iostream>
using namespace std;
/*���������� �������� � �������� �� ����, ���� ���� �� 2 �� 5 ���, ��������
���������� 2%, ���� ���� �� 5 �� 10 ��� - 5%. ������ � ���������� �������� � ����,
������� �������� � ����� � �������
*/
int main() {
    setlocale(LC_ALL, "Russian");
    int ExpInYears, Salary, percent;
    cout << "��������� ����������� ����� ��������� �� ������������ ����," <<
        " �� 2-5 ��� 2%, ���������� �������� 5%" << endl;
    cout << "������� ���� � ����� ����� ������ ��� �� �� �����������: ";
    cin >> ExpInYears >> Salary;
    if (ExpInYears < 2) {
        cout << "����� �� ��������� � ����� " << Salary << " y.e.";
        return 0;
    }
    if (ExpInYears >= 5) {
        percent = (Salary / 100) * 5;
        cout << "����� ����� ��������� �����: " << percent + Salary << " �.�.";
        return 0;
    }
    if (ExpInYears >= 2) {
        percent = (Salary / 100) * 2;
        cout << "����� ����� ��������� �����: " << percent + Salary << " y.e.";
        return 0;
    }
}