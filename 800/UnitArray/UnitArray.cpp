// NOTE: Not solved yet
#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>
#include <cmath>

void solution()
{
	long long size;
	std::cin >> size;
	// I want even number of negative ones
	// I want positive ones to be more than equal to negative ones

	long long positive = 0, negative = 0;
	for (long long i = 0; i < size; i++)
	{
		long long temp;
		std::cin >> temp;
		positive += temp > 0;
		negative += temp < 0;
	}
	long long steps = 0;
	if (negative > positive)
	{
		steps += (negative - positive + 1) / 2;
		positive += steps;
		negative -= steps;
	}
	if (negative % 2 != 0)
	{
		steps += 1;
	}
	std::cout << steps << std::endl;
	// n p 	s  p
	// 3 0 -3 -1
	// 2 1 -1 +1
	// 1 2 +1 +1

	// 3 1 -2 -1
	// 2 2  0  0
}

int main()
{
#ifdef LOCAL
	std::ifstream in("input.txt");
	std::ofstream out("output.txt");
	std::cin.rdbuf(in.rdbuf());
	std::cout.rdbuf(out.rdbuf());
#endif

	int testCase;
	std::cin >> testCase;
	while (testCase--)
	{
		solution();
	}
}