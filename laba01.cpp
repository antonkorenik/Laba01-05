#include <iostream>
#include <cmath>
int a, b;
using namespace std;
int main()
{
	cout << "Enter a " << endl;
	cin >> a;
	cout << "Enter b " << endl;
	cin >> b;
	if (a % b == 0)
		cout << "Result: " << a * b;
	else cout << "fail";
	return  0;
}
/*#include <iostream>
#include <cmath>

using namespace std;

const float RADIUS = 1.5; //глобальная константа
const float A = -1;
float X, Y;

bool BelongsCircle(double x, double y) //прототип функции
{
	return x * x + y * y <= pow(RADIUS, 2);
}

int main()
{
	if (X >= A) cout << "Missing" << endl;
	else cout << "OK";
	return 0;
}*/