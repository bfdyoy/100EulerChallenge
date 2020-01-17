#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

long long sum = 17;
#define LIMIT 2000000

int main()
{
	int iter = 9;
	while (iter < 2000000)
	{
		bool isPrime = true;
		for (int iter2 = 3; iter2 < sqrt(iter) + 1; iter2 = iter2 + 2)
		{
			if (iter % iter2 == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
		{
			sum += iter;
		}
		iter = iter + 2;
	}

	cout << sum;

	return 0;
}