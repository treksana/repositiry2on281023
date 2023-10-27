#include <iostream>
using namespace std;
int main()
{
	int s = 10;
	int i;
	for (i=35; i<88; i++)
	{
		if (i % 7 == 5 || i % 7 == 1 || i % 7 == 2)
		{
			cout << i << endl;
		}
	}
	return 0;
}
