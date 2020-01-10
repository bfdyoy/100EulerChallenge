#include <iostream>
#include <math.h>
using namespace std;

int64_t CHECK = 600851475143;

int main()
{
	
	for (int64_t it = sqrt(CHECK); it != 1; --it)
	{
		if (CHECK % it == 0)
		{
			bool prime = true;
			for (int64_t iter = 2; iter <= sqrt(it); iter++)
			{
				if (it % iter == 0)
				{
					prime = false;
					break;
				}
			}
			if (prime == true)
			{
				cout << it;
				break;
			}
		}
	}

	return 0;
}