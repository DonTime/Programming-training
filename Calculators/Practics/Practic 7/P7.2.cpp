#include <iostream>
using namespace std;
/*
-------------------------------------------------
�� ��������� ����� �� -20 �� 59 ������� ����� ��������
7�7 ���������� ��� � ���� �������� � ������� ������� �
��������  ���������� ��������� �� ������� ���������  �
��������.  ��������� ������� �� �����.
-------------------------------------------------
*/
int main()
{
    setlocale(LC_ALL, "");
    int  number_storage, max, min, k = 0, d;
    const int number_amount = 7;
    d = number_amount - 1;
    max = 50, min = -20;
    int left_right[number_amount];
    int right_left[number_amount];
    int Spisok[number_amount][number_amount];
    srand(time(NULL));

    for (int i = 0; i < number_amount; i++) {//���� ���������� �������

        for (int j = 0; j < number_amount; j++) {
            Spisok[i][j] = rand() % max + min;
        }
    }
    max = -20, min = -20;
    for (int i = 0; i < number_amount; i++) {//����� ������� �� �������
        for (int j = 0; j < number_amount; j++) {
            cout << Spisok[i][j] << "\t";
        }
        cout << endl;
        cout << endl;
    }
    for (int u = 0; u < number_amount; u++) {//����������� ���� ����� �� ������� � �������� ���������
        if (Spisok[u][k] > max) {
            max = Spisok[u][k];
            left_right[0] = u;
            left_right[1] = k;

        }
        if (Spisok[d][u] > min) {
            min = Spisok[d][u];
            right_left[0] = d;
            right_left[1] = u;
        }
        k++;
        d -= 1;
    }
    //����� ����������
    cout << "������������ ����� ������� ���������:";
    cout << "[" << left_right[0] << "]" << "[" << left_right[1] << "]: " << max << endl;
    cout << "������������ ����� �������� ���������:";
    cout << "[" << right_left[0] << "]" << "[" << right_left[1] << "]: " << min << endl;




}
