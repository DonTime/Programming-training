#include <iostream>
using namespace std;
#include <cmath>
#define First float(log(pow(a,2)*x-b*x*cos(2*x)))
#define _sin_ sin(b*x)
#define Two float(b*(a-3.0*x)*pow(_sin_,2))


int main()
{
	setlocale(LC_ALL, "Russian");
	double x, a, b;
	double y;
	x = -1.5;
	b = 2.7;

	cout << "������� ����� �: ";
	cin >> a;
	while (x <= 1) {
		if (Two == 0) {
			cout << "������ ������� �� 0" << endl;

		}
		else if (First / Two != First / Two) {
			cout << "��������� ������ ��������� ��� �=" << x << " ����� ��������������" << endl;

		}
		else {
			cout << "x: " << x << "  y: " << First / Two << endl;
		}
		x = x + 0.25;
	}



}