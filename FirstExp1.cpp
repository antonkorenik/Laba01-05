#include <iostream>
#include <cmath>
using namespace std;
double A, B;

int main()
{
	setlocale(0, "");
	cout << "Введите А: ";
	cin >> A;
	cout << "Введите B: ";
	cin >> B;
	cout << "Cреднее арифметическое кубов: " <<(pow(A, 3) + pow(B, 3)) / 2 << endl;
	cout << "Cреднее геометрическое модулей: " << sqrt(abs(A) * abs(B));
	return 0;
}
 /*#include <iostream>
   #include <cmath>
    using namespace std
    double A, B, C;

	int main()
	setlocale(0, "");
	cout << "Введите А: ";
	cin >> A;
	cout << "Введите B: ";
	cin >> B;
	cout << "Введите С: ";
	cin >> C;
	cout << "Наименьшее число: ";
	if(A > B && A > C) cout << A;
	if(B > A && B > C) cout << B;
	if(C > A && C > B) cout << C;
	return 0;
	*/

