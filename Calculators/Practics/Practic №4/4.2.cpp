#include <iostream>
using namespace std;
/*������� ��������, ��� ������� ������� ����� ��� ���������� �񳺿 
�������� �����, �������, ������ �� ������ ����� ��������� � ���������. �� 
1000 ��2 �������� ����������� 68 � �����*/
int main()
{
    setlocale(LC_ALL, "RUS");
    double lenght, width, height, S, paint;
    cout << "��������� ��������� ������� ����� ������ �� ���� ������� " <<
        "�����\n�� 1000��^2 ����������� 67 ����� ������" << endl;
    cout << "������� ������ ����� � �����������: ";
    cin >> height;
    cout << "������� ������ ����� � �����������: ";
    cin >> width;
    cout << "������� ����� ����� � �����������: ";
    cin >> lenght;
    if ((height <= 0) || (width <= 0) || (lenght <= 0)) {//��������� �� ����� ���� 0 ��� ��������������
        if ((height <= 0) and (width <= 0) and (lenght <= 0)) {
            cout << "�� ����� �� ���������� ����� ������, ������ � �����,"
                " ����� �� ������ �������� ���� ��� ���� �������������";
            return 0;
        }
        if (height <= 0) {
            cout << "������� �� ���������� ����� ������, ����� ��"
                " ������ ���� ����� ���� ��� ���� �������������";
            return 0;
        }
        if (width <= 0) {
            cout << "������� �� ���������� ����� ������, ����� ��"
                " ������ ���� ����� ���� ��� ���� �������������";
            return 0;
        }
        if (lenght <= 0) {
            cout << "������� �� ���������� ����� �����, ����� ��"
                " ������ ���� ����� ���� ��� ���� �������������";
            return 0;
        }
    }
    else {
        S = 2 * (lenght * width + lenght * height + width * height);//������� �����
        paint = S / 1000;
        paint = paint * 68;//������� ������� ������ �����
        if (paint < 1000) {//���� �� ������� �� ���� ������ �� ����� � �������
            cout << paint << " ����� ������ ����� ��� �������� ����� ������ ";
        }
        if (paint > 999) {//���������� ������ �� �� �� ������
            paint = paint / 1000;//���������� ������� � ��
            cout << paint << " �� ������ ����� ��� �������� ����� ������ ";
        }
    }




}
