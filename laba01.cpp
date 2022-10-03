#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "");
	const unsigned DIM = 10;
	int n, negatives = 0;
	double a[DIM], negSum = 0, posSum = 0;
	while (true)
	{
		cout << "Введите n <= " << DIM << endl;
		cin >> n;
		if ((n > 0) && (n <= DIM)) break;
		cout << "Количество элементов указано не верно."
			<< endl << "Попробуйте еще раз!" << endl;
	}
	srand(time(0));
	cout << "Введите значение массива: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
		if (a[i] < 0)
		{
			negatives++;
			negSum = negSum + a[i];
		}
		else if (a[i] > 0) posSum = posSum + a[i];
	}
	cout << "Количество отрицательных элементов: " << negatives << endl
		<< "Сумма отрицательных элементов: " << negSum << endl
		<< "Сумма положительных элементов: " << posSum;
	return(0);
}