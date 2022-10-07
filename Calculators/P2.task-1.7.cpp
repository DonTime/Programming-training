#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    float seconds, minutes, h;
    bool Think;
    Think = true;
    cout << "Введите кол-во секунд" << endl;
    cin >> seconds;
    if (seconds >= 60) {
        minutes = seconds / 60;
    }
    else { cout << "Вы ввели число меньше 60. С начала дня прошло меньше 0 минут." << endl; }
    if (minutes >= 60) {
    }
    else { cout << "С начала нового часа прошло " << minutes << " Минут" << endl; }
    while (Think) {
        minutes = minutes - 60;
        if (minutes <= 59) {
            Think = false;
        }
        cout << minutes << endl;
    }
    cout << "Сначала нового часа прошло " << minutes << " Минут";

}