#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; 
	double R; 
	double y; 
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	if (x <= 0)
			y = -(x/2);
		else
			if (0 < x && x <= R)
				y = R - sqrt(R * R - x * x);
			else
				if (R < x && x <= 2 * R)
					y = sqrt(R * R - (x - R) * (x - R));
				else
					y = -(x - 2 * R) / (6 - 2 * R);
	cout << endl;
	cout << "y = " << y << endl;
}