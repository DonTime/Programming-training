#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	float x, a, b, y;
	a = 2.56;
	b = 7.18;
	x = 6.37;

		if ((cos(a * x) + 5.87)==0) return 0;
		if (sqrt(pow(b, 2) + pow(x, 3)) == 0) return 0;
		y = (cos(a * x) + 5.87) / (sqrt(pow(b, 2) + pow(x, 3)));
		cout << "y= " << y << endl;
}