#include <iostream>
#include <vector>
#include <map>

using namespace std;

const size_t maximum = 5000000 + 2;
const int undefined = -1;
vector<short> mem(maximum, undefined);

unsigned short steps(unsigned long long value)
{
	if (value == 1)
	{
		return 1;
	}

	if (value < mem.size() && mem[value] != undefined)
	{
		return mem[value];
	}
	
	long long next;
	
	if (value % 2 == 0)
	{
		next = value / 2;
	}
	else
	{
		next = 3 * value + 1;
	}
	
	auto result = 1 + steps(next);
	
	if (value < mem.size())
	{
		mem[value] = result;
	}
	return result;
}

int main()
{
	map<unsigned, unsigned> longest;
	unsigned iter;
	longest[iter] = 1;

	unsigned int val;
	cin >> val;

	for (iter = 1; iter <= val; iter++)
	{
		auto len = steps(iter);
		if (len >= longest.rbegin()->second)
		{
			longest[iter] = len;
		}
	}

	auto best = longest.upper_bound(val);
	best--;

	cout << best->first << endl;
	return 0;
}