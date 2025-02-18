#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>

void solution()
{
	int n;
	std::cin >> n;
	int count = 0;
	for (long long base = 1; base <= n; base *= 10)
	{
		for (int d = 1; d <= 9; d++)
		{
			if (d * base <= n)
				count++;
		}
	}
	std::cout << count << std::endl;
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