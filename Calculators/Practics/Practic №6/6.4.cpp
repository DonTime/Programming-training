#include <iostream>
using namespace std;
#include <cmath>


int main()
{
    setlocale(LC_ALL, "Rus");

    const int n = 15;
    double a[n];
    double max = 0;
    int indx = 0;
    for (int i = 0; i < n; i++)//���� ��� ����� ����� � ������
    {
        cout << "������� ������� ������� � " << i + 1 << "= ";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)//���������� �������� � �������
        {
            max = a[i];
        }
    }
    for (int i = 0; i < n; i++) {//��������� ���� ��������� ����� �� ����� ��������� � ����������, ���� ���� ����� �� ����� �� ����������� ������ �� 1
        if (a[i] == max) {
            ++indx;
        }
    }

    cout << "�������� ������������� ��������: " << max << endl;
    cout << "���-�� ���������� ������������ ���������: " << indx << endl;

}