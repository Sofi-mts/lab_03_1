// Lab_03_1.cpp
// < Кучер Софія >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 8
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double z; 
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	cout << "x = "; cin >> x;

	z = 2 + 6 * x;
	A = x * x;
	// спосіб 1: розгалуження в скороченій формі
	if (x <= 0)
		B = z + log(cos(x)) + pow(x, 5);
	if (0 < x && x <= 3)
		B = z + 1 / tan((1 + log(x)) / 3);
	if (x > 3)
		B = z + 12 * x - pow(x, 8);
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі
	if (x <= 0)
	{
		B = z + log(cos(x)) + pow(x, 5);
	}
	else if (0 < x && x <= 3)
	{
		B = z + 1 / tan((1 + log(x)) / 3);
	}
	else
	{
		B = z + 12 * x - pow(x, 8);
	}

	y = A + B;

	cout << "2) y = " << y << endl;

	cin.get();
	return 0;
}