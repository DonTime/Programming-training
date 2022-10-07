#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	float x, a, b, y1, y2;
	a = 3.56;
	b = 5.86;
	x = 2.28;
	if (((pow(sqrt(a + b * x), 5))) > 0) return 0;
	if (((pow(log(x), 2))) == 0) 	return 0;
		y1 = (pow(a, 2) * (exp(-b * x)));
		y2 = ((pow(sqrt(a + b * x), 5))) / ((pow(log(x), 2)));
		cout << "y^1= " << y1 << endl;
		cout << "y^2= " << y2 << endl;
	}