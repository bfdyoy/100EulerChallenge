#include <iostream>
#include <vector>

using namespace std;

#define START 2520

// leave the prime factors in and erase 3 and 6 bc 3*6 = 18
// erase 4 and 5 bc 4*5 = 20 etc
const vector<int> toCheck = { 11, 13, 14, 16, 17, 18, 19, 20 };

// since 2520 is the smallest number divisible by all number from 1 to 10 
// we can just start from 2520 and for each step add 2520

int solve()
{
	for (int var = START; var < INT_MAX; var += START)
	{
		bool found = true;
		for (auto it = toCheck.begin(); it != toCheck.end(); ++it)
		{
			if (var % *it != 0)
			{
				found = false;
			}
		}
		if (found == true)
		{
			return var;
		}
	}
	return -1;
}

int main()
{
	int result;

	result = solve();

	cout << result;

	return 0;
}