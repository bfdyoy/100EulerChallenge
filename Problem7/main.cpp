#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int64_t number)
{
	if (number % 2 == 0)
	{
		return false;
	}
	int check = 3;
	while (check < sqrt(number) + 1)
	{
		if (number % check == 0)
		{
			return false;
		}
		check += 2;
	}
	return true;
}

int64_t nthPrime(int64_t number)
{
	int64_t prime = 2;
	int64_t cnt = 1;
	int64_t iter = 3;
	while (cnt < number)
	{
		if (isPrime(iter))
		{
			prime = iter;
			cnt += 1;
		}
		iter += 2;
	}
	return prime;
}

int main()
{
	int64_t prime = nthPrime(10001);
	cout << prime;
	return 0;
}