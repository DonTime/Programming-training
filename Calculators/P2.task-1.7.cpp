#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    float seconds, minutes, h;
    bool Think;
    Think = true;
    cout << "������� ���-�� ������" << endl;
    cin >> seconds;
    if (seconds >= 60) {
        minutes = seconds / 60;
    }
    else { cout << "�� ����� ����� ������ 60. � ������ ��� ������ ������ 0 �����." << endl; }
    if (minutes >= 60) {
    }
    else { cout << "� ������ ������ ���� ������ " << minutes << " �����" << endl; }
    while (Think) {
        minutes = minutes - 60;
        if (minutes <= 59) {
            Think = false;
        }
        cout << minutes << endl;
    }
    cout << "������� ������ ���� ������ " << minutes << " �����";

}