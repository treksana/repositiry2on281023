#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x1, x2, x3, x4, y1, y2, y3, y4, d12, d23, diag13, diag24;
	cout << "Please enter coordinates of points in order (p1,p2,p3) - ";
	cout << "x1,y1 = ";
	cin >> x1;
	cin >> y1;
	cout << "x2,y2 = ";
	cin >> x2;
	cin >> y2;
	cout << "x3,y3 = ";
	cin >> x3;
	cin >> y3;
	if ((x1 == x2 && x2 == x3) || (y1 == y2 && y2 == y3))
	{
		cout << "It is not a square.";
	}
	else
	{
		d12 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
		d23 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
		if ((x1 == x2 || y1 == y2) && (x2 == x3 || y2 == y3) && (d12 == d23))
		{
			cout << "It is a square. ";
			if (x3 == x2 && y1 == y2)
			{
				x4 = x1;
				y4 = y3;
				cout << "x1 and y3 are coordinates of fourth point. ";
			}
			else if (y3 == y2 && x1 == x2)
			{
				x4 = x3;
				y4 = y1;
				cout << "x3 and y1 are coordinates of fourth point. ";
			}
			diag13= sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
			diag24= sqrt(pow(x2 - x4, 2) + pow(y2 - y4, 2));
			if (diag13 == diag24)
			{
				cout << "It is a 100% percent a square. ";
			}
		}
		else
		{
			cout << "It is not a square";
		}
	}
	return 0;
}
