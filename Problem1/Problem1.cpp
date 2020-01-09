#include <iostream>

using namespace std;

#define INTEREST_INT 1000

int main()
{
	long long sum = 0;
	int iter = 1;
	while (iter != INTEREST_INT)
	{
		if (iter % 3 == 0 || iter % 5 == 0)
		{
			sum += iter;
		}
		iter++;
	}
	cout << sum;
	return 0;
}