#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double x, xp, xk, dx, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "-------------------------" << endl;
	cout << "|" << setw(5) << "x" << "	|";
	cout << setw(10) << "y" << "	|" << endl;
	cout << "-------------------------" << endl;

	x = xp;
	
	while (x <= xk)
	{
		if (x <= -4)
			y = -2;
		else if (-4 < x && x <= 0)
		{
			y = 1. / 4. * x;
		}
		else if (0 < x && x <= 2)
		{
			y = x * x;
		}
		else
		{
			y = -1. / 2. * x + 5;
		}

		cout << "|" << setw(5) << setprecision(2) << x;
		cout << "	|" << setw(10) << setprecision(3) << y;
		cout << "	|" << endl;

		x += dx;
	}

	cout << "-------------------------" << endl;

	return 0;
}