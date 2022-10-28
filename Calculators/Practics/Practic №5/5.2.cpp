#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	int x, n;
	cout << "ѕрограмма по номеру мес€ца определ€ет сезон: " << endl;
	cout << "¬ведите номер мес€ца: ";
	cin >> x;
	if (x > 12) {
		cout << "¬аше число больше чем мес€цев в году";
		return 0;
	}
	n = x % 12;
	cout << n;
	if (n >= 0 and n <= 2) {
		cout << "¬ведЄный мес€ц «имний" << endl;
	}
	if (n >= 3 and n <= 5) {
		cout << "¬ведЄный мес€ц ¬есенний" << endl;
	}
	if (n >= 6 and n <= 8) {
		cout << "¬ведЄный мес€ц Ћетний" << endl;
	}
	if (n >= 9 and n <= 11) {
		cout << "¬ведЄный мес€ц ќсенний" << endl;
	}

}