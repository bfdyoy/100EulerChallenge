#include <iostream>

using namespace std;

#define MAX_NUMBER 100

int main()
{
	int64_t sumSquares;
	int64_t squareSum;

	squareSum = ((MAX_NUMBER * (MAX_NUMBER + 1)) / 2) * ((MAX_NUMBER * (MAX_NUMBER + 1)) / 2);
	sumSquares = ((MAX_NUMBER * (MAX_NUMBER + 1)) * (2 * MAX_NUMBER + 1)) / 6;

	int64_t result;

	result = squareSum - sumSquares;

	cout << result;

	return 0;
}