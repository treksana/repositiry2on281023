#include <iostream>
using namespace std;
int main()
{
	int n,b,c,d,a;
	cout << "Enter three-digital number ";
	cin >> n;
	if (n > 99 && n < 1000)
	{
		b = n / 100;
		c = n % 100 / 10;
		d = n % 10;
		a = b * c * d;
		cout << a << endl;
	}
	else
		cout << "Number is not three-digital"<<endl;
	return 0;
}
