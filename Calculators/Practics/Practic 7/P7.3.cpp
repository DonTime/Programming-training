#include <iostream>
using namespace std;
/*
---------------------------------------------------------
   �� ��������� ����� �� -7 �� 12 ������� ����������
   �������  ������  �������  ��������  � ����������,
   ���������� � ����� ������� � �������� ��� ��������
   ��� ������� ���������� �� 0. ��������� ������� �� �����
----------------------------------------------------------
*/
int main()
{
    setlocale(LC_ALL, "");
    int  number_amount, max, min, k = 1;
    cout << "������� ������ ������� ����� ������: ";
    cin >> number_amount;
    if (k - number_amount == 0) {
        k = 0;
    }
    max = 12, min = -7;
    int** Spisok = new int* [number_amount];
    srand(time(NULL));
    for (int i = 0; i < number_amount; i++) {
        Spisok[i] = new int[number_amount];
    }
    max = -20, min = -20;
    for (int i = 0; i < number_amount; i++) {//����� ������� �� �������
        for (int j = 0; j < number_amount; j++) {
            Spisok[i][j] = rand() % max + min;
        }
        if (k > 0) {
            Spisok[i][k] = 0;
            k++;
        }
        for (int j = 0; j < number_amount; j++) {
            cout << Spisok[i][j] << "\t";
        }

        cout << endl;
    }
    delete[] Spisok;
}