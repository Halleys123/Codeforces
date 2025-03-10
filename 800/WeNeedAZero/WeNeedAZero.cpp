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
	long long temp;
	std::cin >> xorSum;
	for (long long i = 0; i < size - 1; i++)
	{
		std::cin >> temp;
		xorSum ^= temp;
	}
	long long ans = 0;
	if (size % 2 == 0)
	{
		if (xorSum == 0)
		{
			ans = temp;
		}
		else
		{
			ans = -1;
		}
	}
	else
	{
		if (xorSum == 0)
		{
			ans = 0;
		}
		else
		{
			ans = xorSum;
		}
	}
	std::cout << ans << std::endl;
	return;
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