#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>

void solution()
{
	long long size;
	std::cin >> size;
	long long xorSum;
	std::cin >> xorSum;
	for (size_t i = 0; i < size - 1; i++)
	{
		long long temp;
		std::cin >> temp;
		xorSum ^= temp;
	}
	if (size % 2 == 0)
		std::cout << xorSum << std::endl;
	else
	{
		if (xorSum == 0)
			std::cout << 0 << std::endl;
		else
			std::cout << -1 << std::endl;
	}
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