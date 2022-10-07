#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	int number, number1, number2, number3;//инициация чисел
	cout << "Введите 3-х значное число для перестановки 3 и 2 часла: ";//введение пользователя в тему
	cin >> number;//присваивание ввода к инту

	if ((number > 99) && (number < 1000))
	{//проверка на то является ли число 3-х значным
		number1 = number % 10; 
		number2 = (number % 100 - number1) / 10;
		number3 = (number - number % 100) / 100;
		cout << "Ваше число это: " << number3 << number1 << number2;//ввывод пользователю результат, только при правильном вводе 
	}
	else {
		(cout << "Вы ввели не 3-х значное число, пример 123, 546, 345.\n Попробуйте ввести число снова, я в вас верю :)");//пользователь не справился, наставляем пользователя на успех :)
	 }
}