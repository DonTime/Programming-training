#include <iostream>
using namespace std;
/*
-------------------------------------------------
���� ����� ������� N. �������� ��������� �������
������� �� ����� ������� ��� �������� � �������
���������,� ����� � ���������
-------------------------------------------------
*/
int main()
{
    setlocale(LC_ALL, "");
    int number_amount, numb;
    cout << "������� ������ �������: ";
    cin >> number_amount;
    int* Spisok = new int[number_amount];
    //���������� ������ ������� ������� ������ ������������
    for (int i = 0; i < number_amount; i++) {
        cin >> numb;
        Spisok[i] = numb;
    }

    cout << "����� �� ������ ��������: ";
    //����� ����� � ������ ��������
    for (int i = 0; i < number_amount; i++) {
        numb = Spisok[i];
        if (i % 2 == 0) {
            cout << numb << " ";
        }
    }
    cout << endl;
    cout << "����� �� �������� ��������: ";
    //����� ����� � �������� ��������
    for (int i = 0; i < number_amount; i++) {
        numb = Spisok[i];
        if (i % 2 == 1) {
            cout << numb << " ";
        }
    }
    //�������� ������ � ���������� ���������
    delete[] Spisok;
    return 0;
}