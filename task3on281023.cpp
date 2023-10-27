#include <iostream>
using namespace std;
int main()
{
	int c=0;
	int i,n;
	cout << "n= ";
	cin >> n;
	for (i=1; i<=n; i++)
	{
		c = c + i;
	}
	cout << c;
	return 0;
}
