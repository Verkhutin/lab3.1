// lab3.1.cpp
// Верхутін Даніїл
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 3

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x;
	double y;
	double A;
	double B;
	
	cout << "x = "; cin >> x;

	A = 2 / x + fabs(x);

	if (x < 0)
		B = 1 + 4 * x * x;
	if (x >= 0 && x <= 2)
		B = pow((exp(x) + fabs(x)), 2);
	if (x > 2)
		B = 5 * sin(x * x + 1);

	y = A + B;

	cout << endl;
	cout << "1) y = " << y << endl;

	if (x < 0)
		B = 1 + 4 * x * x;
	else
		if (x >= 0 && x <= 2)
			B = pow((exp(x) + fabs(x)), 2);
	else
		B = 5 * sin(x * x + 1);

	y = A + B;

	cout << endl;
	cout << "2) y = " << y << endl;

	cin.get();
	return 0;
}