// Lab_04_4.cpp
// Мацкули Ангеліни
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком
// Варіант 17


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, y, R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(6) << "x" << " |"
		<< setw(11) << "y" << " |" << endl;
	cout << "----------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x < -1 - R)
			y = 1;
		else
			if (x >= -1 - R && x < -1)
				y = -sqrt(-(x * x) - 2 * x - 1 + R * R);
			else
				if (x >= -1 && x < 2)
					y = -R;
				else
					y = -1.0 / 2 * R * (x - 2);

		cout << "|" << setw(6) << setprecision(2) << x
			<< " |" << setw(11) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "----------------------" << endl;
	return 0;
}
