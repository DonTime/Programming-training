#include <iostream>
using namespace std;
/*������ � ���������� ��� �����. ����������, ��� ������, ����� ���������
��� ������� ����� ���� �����. ����� ������� � ���� ���������.
*/
int main() {
    setlocale(LC_ALL, "Russian");
    int first, two, SumOfSqr, SqrOfsum;
    cout << "��������� ���������� ��� ������, ����� ��������� ����� ��� ������� ����� �� 2 �����" << endl;
    cout << "������� 2 ����� �� ������� ��� ����� ������" << endl;
    cin >> first >> two;
    SumOfSqr = pow(first, 2) + pow(two, 2);//����� ���������
    SqrOfsum = pow((first + two), 2);//������� �����
    if (SumOfSqr > SqrOfsum) {
        cout << "����� ��������� ����� ������ ������� �����";

    }
    else if (SumOfSqr < SqrOfsum) {
        cout << "������� ����� ������ ��� ����� ��������� ���� �����";
    }
    else cout << "������� ����� ����� ����� ���������";

    return 0;




}