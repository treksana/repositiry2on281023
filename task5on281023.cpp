#include <iostream>
using namespace std;
int main()
{
	int n, s = 0;
	cout << "n = ";
	cin >> n;
	while n > 0:
	{
		if ((n % 10) % 2 == 0) :
			s++;
		n = n / 10;
	}
	cout << s;
	return 0;
}
