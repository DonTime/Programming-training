#include <iostream>
using namespace std;
#define determinant float x = 1,a = 1, d = 1, l = 1, y = 1;
#define Cosin (cos(l*x))*(1+(cos(y)/sin(y)))   //первая часть формулы вид: cos(lx)*(1+ctg(y))
#define Log1P1 (l*pow(x,3)-3*pow(l,2)*x+y)     // вторая часть формулы и её верхняя часть вид: l*x^3-3*l^2*x+y
#define Log1P2 (3-sin(x+y)-cos(x-y))		  //вторая часть формулы являющаяся её нижней частью, вид: 3-sin(x+y)-cos(x-y)
#define Log1P3 (log(abs(Log1P1/Log1P2)))      // соединяю в единую вторую часть верхнюю и нижнюю часть : log(|Log1P1/Log1P2|)
#define Chapter3P1 (pow(tan(x/l),4)+pow(tan(y/d),2)+1) //3 часть формулы верхняя часть: tg^4(x/l)+tg^3(y/d)+1
#define Chapter3P2 (sqrt(abs(3+sin(x)-pow(cos(y),3)))) //3 часть формулы нижняя часть : √|3+sin(x)-cos^3(y)|
#define Chapter3P3 (sqrt(Chapter3P1/Chapter3P1)) //соединение 3 части формулы во едино
#define Answer Cosin+Log1P3+Chapter3P3       //Соединение в полную формулу

int main()
{
	setlocale(LC_ALL, "RUS");
	determinant;
	cout << "Введите значения x, a, d, l, y. Для обчисления виразу з вправи 3.3.7, ноль в выражении использовать нельзя" << endl;
	cin >> x >> a >> d >> l >> y;//переопределение переменных
	if (Log1P1 == 0) return 0;
	if (Log1P2 == 0) return 0;
	if (Chapter3P1 == 0) return 0;
	if (Chapter3P2 == 0) return 0;
	try {
		Answer;//вычисление из формулы в пред процессе
		cout << "Ответ: " << Answer << endl;
	}
	catch (float a) { return 0; }



}