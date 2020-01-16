#include <iostream>
#include <math.h>

using namespace std;

/*
* a^2 + b^2 = c^2
* a + b + c = 1000
* c = 1000 - a - b
* a^2 + b^2 = (1000 - a - b)^2
* => a = (1000^2 - 2 * 1000 * b) / (2 * 1000 * b)
*
*/

int main()
{
	double a;
	double c;
	for (int b = 1; b < 1000; ++b)
	{
		a = ((pow(1000, 2) - 2000 * b) / (2000 - 2 * b));
		if ((int)a == a)
		{
			c = sqrt(pow(a,2) + pow(b,2));
			if (a + b + c == 1000)
			{
				long long product = a * b * c;
				cout << product;
				break;
			}
		}
	}

	return 0;
}