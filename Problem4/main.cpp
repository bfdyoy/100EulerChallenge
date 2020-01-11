#include <iostream>
#include <math.h>
using namespace std;

int64_t maxNumber = 998001;

bool isPalindrome(int64_t n)
{
	if (n < 0)
		return false;

	int64_t div = 1;
	// find the divisor
	while (n / div >= 10)
		div *= 10;

	// any number less than 10 is a palindrome
	while (n != 0) {
		int64_t leading = n / div;
		int64_t trailing = n % 10;
		if (leading != trailing)
			return false;

		// % with div gets rid of leading digit
		// dividing result by 10 gets rid of trailing digit
		n = (n % div) / 10;

		// got rid of 2 numbers, update div accordingly
		div /= 100;
	}
	return true;
}


int main()
{
	
	int var = 0;

	for (int it = 990; it > 99; it-=11)
	{
		for (int it2 = 999; it2 > 99; it2--)
		{
			int product = it * it2;
			if (var < product && isPalindrome(product))
			{
				var = product;
				break;
			}
			else if (product < var)
			{
				break;
			}
		}
	}
	cout << var;
	return 0;
}