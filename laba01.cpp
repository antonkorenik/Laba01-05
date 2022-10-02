#include <iostream>
#include <cmath>
using namespace std;
const float a = 3, b = 4;
float h, x;
int main()
{
	setlocale(0, "");
	while (true)
	{
		cout << "Введите значение деления шкалы: ";
		cin >> h;
		if (h < b - a) break;
		cout << endl << "Неверное значение!"
			<< endl << "Попробуйте еще раз!" << endl;
	}
	cout << endl << "Таблица значений функций"
		<< endl << endl;
	cout.width(34);
	cout.fill('*');
	cout << ' ' << endl
		<< "* x * value *" << endl;
	cout.width(34);
	cout.fill('*');
	cout << ' ' << endl;
	cout.precision(5);
	cout.setf(ios::scientific);
	x = a;
	while (x <= b)
	{
		cout << "* " << x << " * " << x * sqrt(x) << " *"
			<< endl;
		x = x + h;
	}
	cout.unsetf(ios::scientific);
	cout.width(34);
	cout.fill('*');
	cout << ' ' << endl;
	return 0;
}