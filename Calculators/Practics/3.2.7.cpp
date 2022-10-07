#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	float x, a, b, y1, y2;
	a = 2.56;
	b = 7.18;
	x = 6.37;
	try {
		if (a > 0 && b > 0 && x > 0) {
			y1 = (pow(a, 2) * (exp(-b * x)));
			y2 = ((pow(sqrt(a + b * x), 5))) / ((pow(log(x), 2)));
			cout << "y^1= " << y1 << endl;
			cout << "y^2= " << y2 << endl;
		}
		else cout << "Ноль в выражении использовать нельзя" << endl;
	}
	catch (y1) {
		cout << "При обчислении произошла ошибка" << endl;
	}

}