#include <iostream>
#include <cmath>
using namespace std;
float n;
int main()
{
	while (true)
	{
		setlocale(0, "");
		cout << "Введите n: ";
		cin >> n;
		if (n > 0) break;
		cout << endl << "Введено отрицательное n!!! "
			<< endl << "Попробуйте еще раз!!!" << endl;
	}
	cout << "Результат: " << (pow(2, n));
	return 0;
}