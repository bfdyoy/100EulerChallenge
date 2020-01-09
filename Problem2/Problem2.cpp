#include <iostream>
#include <vector>

using namespace std;

#define LIMIT 4000000

int main()
{
	vector<long long> fibonacci = {1, 2};
	long long sum = 0;
	int iter = 0;
	while (fibonacci[fibonacci.size() - 1] < LIMIT)
	{
		fibonacci.push_back(fibonacci[iter] + fibonacci[iter + 1]);
		++iter;
	}

	for (auto it = fibonacci.begin(); it != fibonacci.end(); ++it)
	{
		if (*it % 2 == 0)
		{
			sum += *it;
		}
	}

	cout << sum;
	return 0;
}
