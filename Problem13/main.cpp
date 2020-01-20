#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	const unsigned MinDigits = 60;
	vector<unsigned> sum(MinDigits, 0);

	unsigned int numbers = 100;

	cin >> numbers;

	while (numbers--)
	{
		string myString;
		cin >> myString;

		vector<unsigned> add;

		for (auto it = myString.rbegin(); it != myString.rend(); it++)
		{
			add.push_back(*it - '0');
		}
		add.resize(sum.size(), 0);

		for (unsigned it = 0; it < add.size(); it++)
		{
			sum[it] += add[it];

			if (sum[it] >= 10)
			{
				sum[it + 1]++;
				sum[it] -= 10;
			}
		}
	}

	auto it = sum.rbegin();
	while (*it == 0)
	{
		it++;
	}

	unsigned numDigits = 10;
	while (numDigits-- > 0)
	{
		cout << *it++;
	}
	return 0;
}