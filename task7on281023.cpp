#include <iostream>
using namespace std;
int main()
{
	int n, m = 0;
	for (n = 1000; a < 10000; a++)
	{
		if ((a % 10) + (a % 100 / 10) + (a / 100 % 10) + (a / 1000) == 15)
		{
			m++;
		}
	}
	cout << m;
	return 0;
}
