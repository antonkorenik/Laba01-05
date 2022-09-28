#include <iostream>
using namespace std;
int a = 100;
int n = 2;
int main()
{
	setlocale(0, "");
	cout << "n = " << n << endl;
	cout << "a = " << a << endl << "a % n = " << a % n << endl;

	a = 256;
	int k = n % 5;
	cout << "a = " << a << endl << "a >> k = " << (a >> k) << endl;

	a = 2;
	k = n % 5;
	cout << "a = " << a << endl << "a << k = " << (a << k) << endl;
	cout << boolalpha;
	cout << "((6 % 3 == 1) == (0 == 1)) = " << ((6 % 3 == 1) == (0 == 1)) << endl;
	cout << "((2 != 2*3*4) && (2 != 24)) = " << ((2 != 2 * 3 * 4) && (2 != 24)) << endl;
	cout << "((5 / 2 >= 5) || (2 >= 5)) = " << ((5 / 2 >= 5) || (2 >= 5)) << endl;
	cout << "((8 % 3 == 1) == (2 == 1)) = " << ((8 % 3 == 1) == (2 == 1)) << endl;
	cout << "((2 != 1*1*2) == (!2 != 2)) = " << ((2 != 1 * 1 * 2) == (!2 != 2)) << endl;

	return 0;
}
		