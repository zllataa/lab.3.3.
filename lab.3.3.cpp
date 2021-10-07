// Lab_03_3.cpp
// Половка Злата
// Лабораторна робота No 3.3
// Розгалуження, задане графіком функції.
// Варіант 0.6
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент

		double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	// розгалуження в повній формі
	if (x <= -5)
		y = -3;
	else
		if (-5 < x && x <= -R)
			y = -(3 * (R + x))/(R - 5);
		else
			if (-R < x && x <= R)
				y = sqrt(R * R - x * x);
			else
				if (R < x && x <= 8)
					y = (R * (x - R)) / (8 - R);
				else
					y = R ;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}