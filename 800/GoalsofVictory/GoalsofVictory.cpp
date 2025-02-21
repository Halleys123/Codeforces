#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>

void solution()
{
	// total number of teams
	int n;
	std::cin >> n;
	// efficiency of n - 1 teams
	// int *effi = new int[n - 1];
	long long sum = 0, temp;
	for (int i = 0; i < n - 1; i++)
	{
		std::cin >> temp;
		sum += temp;
	}
	// 4
	// 3 -4 5
	// a b c d = goals of each team
	// a - (b + c + d) = 3
	// b - (a + c + d) = -4
	// c - (a + b + d) = 5
	// d - (a + b + c) = x

	// a + b + c - (2b + 2c + 2d + 2a) = 4
	// -4 = a + b + c + 2d
	// 3d = x - 4
	std::cout << -sum << std::endl;
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